@class WebDownloadInternal;

@interface WebDownload : NSURLDownload {
    WebDownloadInternal *_webInternal;
}

- (void)dealloc;
- (id)init;
- (id)initWithRequest:(id)a0 delegate:(id)a1;
- (id)_initWithLoadingConnection:(id)a0 request:(id)a1 response:(id)a2 delegate:(id)a3 proxy:(id)a4;
- (id)_initWithRequest:(id)a0 delegate:(id)a1 directory:(id)a2;
- (void)_setRealDelegate:(id)a0;

@end
