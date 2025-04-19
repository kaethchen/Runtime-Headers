@class AMSURLSession;

@interface AMSURLDelegateProxy : NSObject

@property (weak, nonatomic) AMSURLSession *session;
@property (weak) id delegate;

- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithSession:(id)a0 delegate:(id)a1;

@end
