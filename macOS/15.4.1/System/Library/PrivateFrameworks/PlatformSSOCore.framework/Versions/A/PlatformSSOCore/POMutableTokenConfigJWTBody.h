@class NSString, NSDictionary;

@interface POMutableTokenConfigJWTBody : POTokenConfigJWTBody <POMutableJWTBody>

@property (retain) NSString *userName;
@property (retain) NSString *loginUserName;
@property (retain) NSString *unlockData;
@property (retain) NSString *unlockHash;
@property (retain) NSString *idpTokenId;
@property (readonly) NSDictionary *allData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUserName:(id)a0;
- (void)setLoginUserName:(id)a0;
- (void)addCustomClaims:(id)a0;
- (void)setIdpTokenId:(id)a0;
- (void)setUnlockData:(id)a0;
- (void)setUnlockHash:(id)a0;

@end
