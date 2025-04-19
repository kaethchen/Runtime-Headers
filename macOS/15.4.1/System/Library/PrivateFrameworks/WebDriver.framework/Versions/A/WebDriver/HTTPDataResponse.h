@class NSData;

@interface HTTPDataResponse : NSObject <HTTPResponse> {
    unsigned long long offset;
    NSData *data;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (BOOL)isDone;
- (unsigned long long)contentLength;

@end
