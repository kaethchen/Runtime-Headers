@class NSData, NSDictionary;

@interface HTTPDynamicFileResponse : HTTPAsyncFileResponse {
    NSData *separator;
    NSDictionary *replacementDict;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)setOffset:(unsigned long long)a0;
- (BOOL)isDone;
- (unsigned long long)contentLength;
- (id)initWithFilePath:(id)a0 forConnection:(id)a1 separator:(id)a2 replacementDictionary:(id)a3;
- (BOOL)isChunked;
- (void)processReadBuffer;

@end
