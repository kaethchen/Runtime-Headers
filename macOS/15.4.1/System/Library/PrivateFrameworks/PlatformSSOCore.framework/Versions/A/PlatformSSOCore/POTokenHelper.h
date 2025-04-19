@protocol POUserIdentifierProvider;

@interface POTokenHelper : NSObject

@property (retain) id<POUserIdentifierProvider> userIdentifierProvider;

+ (id)dataToHex:(id)a0;

- (void).cxx_destruct;
- (void)removeAllTokens;
- (void)postAHPCacheRefreshNotification;
- (id)findTokenIdForSmartCardAMUser:(id)a0 tokenHash:(id *)a1;
- (id)findTokenIdForSmartCardBoundUser:(id)a0 tokenHash:(id *)a1;
- (id)getTokenInfo;
- (id)initWithIdentifierProvider:(id)a0;
- (BOOL)insertTokenForUser:(id)a0;
- (void)removeTokenForUser:(id)a0;
- (int)storeUnlockKeyWithPubKeyHash:(id)a0 tokenId:(id)a1 pubKeyHashWrap:(id)a2 passwordContext:(id)a3;
- (id)tokenHashDataForUser:(id)a0;
- (BOOL)waitForTokenAvailable:(id)a0;
- (id)base64URLtokenHashForUser:(id)a0;
- (BOOL)canTokenIdLogin:(id)a0 pubKeyHash:(id)a1;
- (id)findInfoForTokenId:(id)a0;
- (id)getDriverConfiguration;
- (BOOL)retrieveCertAndKeyForTokenId:(id)a0 context:(id)a1 certificate:(struct __SecCertificate **)a2 privateKey:(struct __SecKey **)a3;
- (id)tokenHashForUser:(id)a0;

@end
