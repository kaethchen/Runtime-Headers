@class NSString, NSURL, NSURLResponse;

@interface IFDownloadToken : NSObject <NSURLConnectionDelegate> {
    NSURL *sourceURL;
    NSURL *finalURL;
    double downloadProgress;
    int status;
    NSURLResponse *currentDownloadResponse;
    unsigned long long expectedSize;
    unsigned long long downloadedSize;
    id progressDelegate;
    char sourceURLHash[20];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (int)status;
- (double)downloadProgress;
- (id)finalURL;
- (void)setDownloadProgress:(double)a0;
- (void)setFinalURL:(id)a0;
- (void)download:(id)a0 decideDestinationWithSuggestedFilename:(id)a1;
- (void)download:(id)a0 didCreateDestination:(id)a1;
- (void)download:(id)a0 didFailWithError:(id)a1;
- (void)download:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (void)download:(id)a0 didReceiveDataOfLength:(unsigned long long)a1;
- (void)download:(id)a0 didReceiveResponse:(id)a1;
- (BOOL)download:(id)a0 shouldDecodeSourceDataOfMIMEType:(id)a1;
- (id)download:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)downloadDidBegin:(id)a0;
- (void)downloadDidFinish:(id)a0;
- (void)setStatus:(int)a0;
- (unsigned long long)downloadedSize;
- (id)sourceURL;
- (void)download:(id)a0 didCancelAuthenticationChallenge:(id)a1;
- (void)setProgressDelegate:(id)a0;
- (unsigned long long)expectedSize;
- (id)initWithURL:(id)a0 expectedSize:(unsigned long long)a1;
- (const char *)sourceURLHash;

@end
