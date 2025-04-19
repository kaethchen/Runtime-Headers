@interface SVXActivationUtils : NSObject

- (id)createActivationContextWithRequestInfo:(id)a0 context:(id)a1;
- (id)createDeactivationContextWithReason:(long long)a0 options:(unsigned long long)a1 context:(id)a2;
- (BOOL)wantsActivation:(id)a0;

@end
