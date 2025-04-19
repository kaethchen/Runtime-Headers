@class NSURL;

@interface AMSUIContentImageFetchOperation : AMSUIAssetFetchOperation

@property (retain) NSURL *imageURL;
@property (copy) id /* block */ fallbackBlock;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)main;
- (void)_fallbackWithURL:(id)a0;

@end
