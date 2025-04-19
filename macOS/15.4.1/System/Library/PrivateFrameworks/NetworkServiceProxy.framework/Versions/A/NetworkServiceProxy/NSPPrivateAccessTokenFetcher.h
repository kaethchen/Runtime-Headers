@class NSData, NSString, NSURL, NSPPrivacyProxyTokenKey, NSDictionary, NSMutableArray, NSPPrivateAccessTokenRequest, NSObject;

@interface NSPPrivateAccessTokenFetcher : NSObject {
    NSURL *_customAttester;
    NSDictionary *_customAttesterHeaders;
    NSData *_challengeData;
    NSData *_pairedChallengeData;
    NSData *_tokenKey;
    NSData *_originNameKey;
    NSMutableArray *_secondaryFetchers;
    NSObject *_waitingToken;
    NSPPrivateAccessTokenRequest *_waitingTokenRequest;
    NSData *_waitingClientNonce;
    NSPPrivacyProxyTokenKey *_waitingTokenKey;
}

@property BOOL systemClient;
@property (retain) NSString *selectedOrigin;
@property struct { unsigned int val[8]; } auditToken;
@property (retain) NSString *bundleID;
@property (retain) NSString *auxiliaryAuthenticationCacheKey;
@property (readonly) NSURL *customAttester;
@property (readonly) NSDictionary *customAttesterHeaders;

+ (BOOL)checkOriginAllowedAsThirdParty:(id)a0;
+ (void)fetchAuxiliaryAuthenticationDataFromCacheForType:(unsigned long long)a0 label:(id)a1 cacheKey:(id)a2 completionHandler:(id /* block */)a3;
+ (void)saveAuxiliaryAuthenticationDataToCache:(id)a0 type:(unsigned long long)a1 forLabel:(id)a2 cacheKey:(id)a3;

- (void).cxx_destruct;
- (void)addSecondaryChallenge:(id)a0 tokenKey:(id)a1 originNameKey:(id)a2;
- (void)fetchTokenWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithChallenge:(id)a0 tokenKey:(id)a1 originNameKey:(id)a2;
- (void)fetchLinkedTokenPairWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchTokenPairWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)generateTokenRequestWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleTokenResponse:(id)a0 withQueue:(id)a1 completionHandler:(id /* block */)a2;
- (id)initForKnownIssuerWithChallenge:(id)a0;
- (id)initForKnownIssuerWithLongLivedTokenChallenge:(id)a0 oneTimeTokenChallenge:(id)a1;
- (void)saveTokenToCache:(id)a0;
- (void)setCustomAttester:(id)a0 headers:(id)a1;

@end
