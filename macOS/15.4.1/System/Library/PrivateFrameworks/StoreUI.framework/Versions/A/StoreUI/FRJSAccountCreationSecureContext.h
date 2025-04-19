@class CKSigningSession;

@interface FRJSAccountCreationSecureContext : FRJSObject

@property (readonly, nonatomic) CKSigningSession *session;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_closeSession;
- (id)_signData:(id)a0;
- (id)callFunction:(id)a0 withArguments:(id)a1;
- (id)initWithPrimedSession:(id)a0;

@end
