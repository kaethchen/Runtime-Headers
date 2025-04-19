@class CNAuthorizationContext;

@interface CNAuthorization : NSObject

@property (readonly, nonatomic) CNAuthorizationContext *authorizationContext;

+ (id)logger;

- (id)init;
- (void).cxx_destruct;
- (long long)authorizationStatusForEntityType:(long long)a0;
- (id)initWithAssumedIdentity:(id)a0;
- (id)initWithAuthorizationContext:(id)a0;
- (BOOL)isAccessRestrictedForEntityType:(long long)a0;
- (void)requestAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)requestAccessForEntityType:(long long)a0 error:(id *)a1;

@end
