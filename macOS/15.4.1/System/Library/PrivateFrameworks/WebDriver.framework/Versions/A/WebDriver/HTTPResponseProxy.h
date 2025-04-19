@class NSObject;
@protocol HTTPResponse;

@interface HTTPResponseProxy : NSObject <HTTPResponse>

@property (retain, nonatomic) NSObject<HTTPResponse> *response;
@property (nonatomic) long long status;

- (void)forwardInvocation:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (BOOL)isDone;
- (unsigned long long)contentLength;
- (long long)customStatus;

@end
