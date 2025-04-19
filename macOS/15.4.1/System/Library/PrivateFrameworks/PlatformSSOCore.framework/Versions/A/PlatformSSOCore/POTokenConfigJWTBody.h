@class NSString;

@interface POTokenConfigJWTBody : _POJWTBodyBase

@property (readonly) NSString *userName;
@property (readonly) NSString *loginUserName;
@property (readonly) NSString *unlockData;
@property (readonly) NSString *unlockHash;
@property (readonly) NSString *idpTokenId;

- (id)mutableCopy;
- (id)userName;
- (id)loginUserName;
- (id)idpTokenId;
- (id)unlockData;
- (id)unlockHash;

@end
