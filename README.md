# path_segmentation
Contains a class which takes cv::Mat imagePath and returns cv::Mat imageSegmented.
The path_segmentation package contains class for segmenting cv::Mat image with a path.
Uses KittiSeg package with Tensorflow to segment path and then outputs it as cv::Mat.



# Install python dependencies
1. Clone KittySeg from github
2. Change contents of requirements.txt to:
matplotlib>=1.5.1
numpy<=1.16.1
Pillow>=3.3.0
scipy>=0.17.1
commentjson>=0.6
tf-nightly>=1.14.1.dev20190519
3. Install cuda according to https://gist.github.com/Mahedi-61/2a2f1579d4271717d421065168ce6a73
4. Install KittySeg according to its readme

Output of evaluate.py is in drirectory ${KittiSeg}/RUNS/KittiSeg_pretrained/analyse/images