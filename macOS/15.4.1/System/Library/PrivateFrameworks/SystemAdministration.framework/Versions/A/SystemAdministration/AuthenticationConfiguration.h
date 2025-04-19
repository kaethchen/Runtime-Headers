@class NSObject, NSString, AdminAuthenticator, NSMutableSet, NSMutableArray, SFAuthorization;
@protocol OS_dispatch_queue;

@interface AuthenticationConfiguration : NSObject {
    NSMutableArray *_authStrings;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_openAuthentications;
}

@property (readonly) AdminAuthenticator *authenticator;
@property SFAuthorization *authorization;
@property (copy) NSString *nameOverride;
@property (copy) NSString *subtitleOverride;
@property (copy) NSString *iconPathOverride;

+ (id)shared;
+ (id)createSharedConfiguration:(id)a0 authorizationStrings:(id)a1;
+ (void)destroyCredentials;

- (void)addAuthorizationString:(id)a0;
- (void)authenticateForWindowID:(long long)a0 completion:(id /* block */)a1;
- (id)authorizationStrings;
- (id)initWithAuthenticator:(id)a0 authorizationStrings:(id)a1;
- (void)processSuccessfulAuthenticationWithCompletion:(id /* block */)a0;
- (void)removeAuthorizationString:(id)a0;

@end
