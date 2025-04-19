@interface AMSConnectionDelegateProxy : NSObject

@property (weak) id delegate;

+ (id)proxyWithDelegate:(id)a0;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
