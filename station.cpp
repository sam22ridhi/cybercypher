#include <iostream>
#include <string>
#include <curl/curl.h> // for making HTTP requests

int main() {
    double lat = 37.788022; 
    double lng = -122.399797; 
    int radius = 1000;
    std::string API_KEY = "YOUR_API_KEY"; 
    std::string types = "charging_station"; 

    std::string url = "https://maps.googleapis.com/maps/api/place/nearbysearch/json?location=" + std::to_string(lat) + "," + std::to_string(lng) + "&radius=" + std::to_string(radius) + "&types=" + types + "&key=" + API_KEY;

    CURL *curl;
    CURLcode res;
    std::string response;

    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

    }
    return 0;
}