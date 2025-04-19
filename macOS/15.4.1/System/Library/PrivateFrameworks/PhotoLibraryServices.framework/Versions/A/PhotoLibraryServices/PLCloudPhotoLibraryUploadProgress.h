@interface PLCloudPhotoLibraryUploadProgress : NSObject {
    unsigned long long _totalNumberOfUnpushedMasters;
    unsigned long long _totalNumberOfPushedMasters;
    unsigned long long _totalNumberOfUploadedMasters;
    unsigned long long _totalNumberOfDeferredAssets;
    unsigned long long _totalSizeOfUnpushedOriginals;
    unsigned long long _totalSizeOfPushedOriginals;
    unsigned long long _totalUploadedOriginalSize;
}

@end
