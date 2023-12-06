#!/bin/bash
# makes a request to [::-1]/catch_me that causes the server to respond with a message
curl -sX PUT 54.160.95.240:5000/catch_me -d "user_id=98" -H "Origin: HolbertonSchool"

