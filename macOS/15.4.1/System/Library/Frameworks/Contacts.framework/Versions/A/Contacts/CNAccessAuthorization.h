@class CNAuthorizationContext;

@interface CNAccessAuthorization : NSObject

@property (readonly, nonatomic) CNAuthorizationContext *authorizer;

+ (id)new;
+ (BOOL)canSetContactProperty:(id)a0;
+ (id)unauthorizedKeysWithAuthorizer:(id)a0;
+ (id)allAuthorizationKeys;
+ (id)allAuthorizationKeysVector;
+ (void)removeUnavailableKeysFromContactKeyVector:(id)a0;
+ (id)unauthorizedKeysVectorWithAuthorizer:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAuditToken:(id)a0;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (BOOL)authorizeFetchRequest:(id)a0 accessError:(id *)a1;
- (id)authorizedKeysForContactKeys:(id)a0;
- (id)initWithAuthorizer:(id)a0;
- (void)performWork:(id /* block */)a0 authorizingFetchRequest:(id)a1 failureHandler:(id /* block */)a2;
- (void)resetUnauthorizedKeysForFetchRequest:(id)a0;
- (id)unauthorizedKeysVector;

@end
