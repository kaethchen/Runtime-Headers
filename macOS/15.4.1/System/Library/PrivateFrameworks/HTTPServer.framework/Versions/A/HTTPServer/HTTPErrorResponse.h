@interface HTTPErrorResponse : NSObject <HTTPResponse> {
    long long _status;
}

- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)a0;
- (long long)status;
- (id)readDataOfLength:(unsigned long long)a0;
- (BOOL)isDone;
- (unsigned long long)contentLength;
- (id)initWithErrorCode:(int)a0;

@end
