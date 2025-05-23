@class NSOutputStream, NSString, NSThread, NSURL, NSMutableData, NSInputStream, NSURLConnection;
@protocol NSXMLParserDelegate;

@interface IMXMLStreamOperation : NSOperation <NSStreamDelegate, NSURLConnectionDelegate> {
    BOOL _isExecuting;
    BOOL _isFinished;
    BOOL _isCancelled;
    NSThread *_runloopThread;
    NSInputStream *_readStream;
    NSOutputStream *_writeStream;
    NSMutableData *_dataBuffer;
    BOOL _finishedDownloadingData;
    NSURL *_url;
    NSURLConnection *_urlConnection;
}

@property (nonatomic) id<NSXMLParserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationWithURL:(id)a0 parseDelegate:(id)a1;

- (void)dealloc;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)start;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willCacheResponse:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (BOOL)isCancelled;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)_startRunLoop;
- (id)initWithURL:(id)a0 parseDelegate:(id)a1;
- (void)writeToStream;

@end
