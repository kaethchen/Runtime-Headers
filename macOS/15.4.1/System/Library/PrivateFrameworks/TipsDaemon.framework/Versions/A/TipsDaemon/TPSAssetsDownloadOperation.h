@class NSString, NSURL;

@interface TPSAssetsDownloadOperation : TPSAsyncOperation {
    void /* unknown type, empty encoding */ assetIdentifier;
    void /* unknown type, empty encoding */ downloadedURL;
    void /* unknown type, empty encoding */ assetURLPath;
    void /* unknown type, empty encoding */ priority;
    void /* unknown type, empty encoding */ urlSessionItem;
}

@property (nonatomic, copy) NSString *assetIdentifier;
@property (nonatomic, copy) NSURL *downloadedURL;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithAssetIdentifier:(id)a0 assetURLPath:(id)a1;

@end
