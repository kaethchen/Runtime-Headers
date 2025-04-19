@class NSString, AMSPromiseSerialQueue;

@interface AMSAbsintheSession : NSObject

@property (class, readonly) AMSAbsintheSession *defaultSession;

@property (readonly, nonatomic) AMSPromiseSerialQueue *queue;
@property (nonatomic) struct PSCSessionInternal_ { } *sessionRef;
@property (copy, nonatomic) NSString *servKey;
@property void /* function */ *PSCHelloV4Override;

- (id)init;
- (void).cxx_destruct;
- (id)_prepareContextWithBag:(id)a0;
- (id)asynchronouslyClearSession;
- (BOOL)clearSession;
- (id)signData:(id)a0 bag:(id)a1;
- (id)signData:(id)a0 bag:(id)a1 error:(id *)a2;
- (BOOL)verifyData:(id)a0 bag:(id)a1 error:(id *)a2;

@end
