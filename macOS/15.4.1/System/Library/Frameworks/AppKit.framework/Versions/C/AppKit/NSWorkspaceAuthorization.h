@interface NSWorkspaceAuthorization : NSObject {
    id _private;
}

- (void)dealloc;
- (id)data;
- (id)initWithAuthorizationRef:(struct AuthorizationOpaqueRef { } *)a0 ofType:(long long)a1;

@end
