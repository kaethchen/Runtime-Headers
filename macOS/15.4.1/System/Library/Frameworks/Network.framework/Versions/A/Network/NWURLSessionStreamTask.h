@class NSURLResponse;

@interface NWURLSessionStreamTask : NWURLSessionTask {
    BOOL _readClosed;
    BOOL _writeClosed;
    BOOL _becameStreams;
    unsigned int _outstandingReadsWrites;
    NSURLResponse *_storedResponse;
}

+ (BOOL)isSubclassOfClass:(Class)a0;

- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)response;
- (void)captureStreams;
- (void)closeRead;
- (void)closeWrite;
- (void)readDataOfMinLength:(unsigned long long)a0 maxLength:(unsigned long long)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;
- (void)startSecureConnection;
- (void)writeData:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)loaderBetterPathAvailable;
- (void)loaderConnectedWithHTTPConnectionMetadata:(id)a0 CNAMEChain:(id)a1 unlistedTracker:(id)a2;
- (void)startNextLoad:(BOOL)a0;

@end
