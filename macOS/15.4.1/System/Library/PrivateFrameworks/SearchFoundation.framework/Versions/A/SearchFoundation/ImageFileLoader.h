@class NSString;

@interface ImageFileLoader : NSObject <SFImageResourceLoader, SFAsyncResourceLoader>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canLoadImage:(id)a0 context:(id)a1;
- (id)cardLoader;
- (id)imageLoader;
- (void)loadImage:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (id)moreResultsLoader;
- (id)urlForImage:(id)a0 context:(id)a1;

@end
