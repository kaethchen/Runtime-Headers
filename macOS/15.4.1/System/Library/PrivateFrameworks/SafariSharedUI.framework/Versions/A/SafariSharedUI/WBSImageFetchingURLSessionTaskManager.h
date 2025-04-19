@class NSString, NSMutableDictionary, WBSWebViewPoolManager;

@interface WBSImageFetchingURLSessionTaskManager : NSObject <NSURLSessionTaskDelegate> {
    NSMutableDictionary *_urlSessionsByType;
    WBSWebViewPoolManager *_webViewPoolManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)downloadImageWithURL:(id)a0 options:(unsigned long long)a1 completionHandlerIncludingErrors:(id /* block */)a2;
- (void)_downloadFirstValidImageWithURLs:(id)a0 inURLSession:(id)a1 failedURLDownloadsToErrorsDictionary:(id)a2 completionHandler:(id /* block */)a3;
- (id)_urlSessionWithOptions:(unsigned long long)a0;
- (void)_wbsImageFromImageData:(id)a0 completionHandler:(id /* block */)a1;
- (void)downloadFirstValidImageWithURLs:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)downloadImageWithURL:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
