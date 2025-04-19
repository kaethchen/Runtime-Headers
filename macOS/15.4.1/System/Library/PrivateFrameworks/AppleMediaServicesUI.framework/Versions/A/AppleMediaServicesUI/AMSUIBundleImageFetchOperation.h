@class NSString, NSArray;

@interface AMSUIBundleImageFetchOperation : AMSUIAssetFetchOperation

@property (retain) NSString *imageName;
@property (retain) NSArray *bundlesToSearch;

- (void).cxx_destruct;
- (void)main;
- (BOOL)isLowLatency;
- (id)initWithImageName:(id)a0 searchBundles:(id)a1;

@end
