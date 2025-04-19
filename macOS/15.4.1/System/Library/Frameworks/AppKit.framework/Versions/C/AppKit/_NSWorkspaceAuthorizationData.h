@interface _NSWorkspaceAuthorizationData : NSObject

@property (readonly) struct { char bytes[32]; } authExt;
@property (readonly) struct AuthorizationOpaqueRef { } *auth;
@property (readonly) long long type;

- (void)dealloc;
- (id)initWithAuth:(struct AuthorizationOpaqueRef { } *)a0 externalForm:(struct { char x0[32]; })a1 type:(long long)a2;

@end
