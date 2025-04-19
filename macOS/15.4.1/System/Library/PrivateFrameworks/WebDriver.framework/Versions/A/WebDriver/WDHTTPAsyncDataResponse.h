@class NSData, HTTPConnection;

@interface WDHTTPAsyncDataResponse : NSObject <HTTPResponse> {
    HTTPConnection *_connection;
    NSData *_data;
    unsigned long long _readOffset;
}

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)a0;
- (BOOL)isAsynchronous;
- (id)readDataOfLength:(unsigned long long)a0;
- (BOOL)isDone;
- (unsigned long long)contentLength;
- (void)connectionDidClose;
- (BOOL)delayResponseHeaders;
- (void)fulfillWithData:(id)a0 andStartResponse:(BOOL)a1;

@end
