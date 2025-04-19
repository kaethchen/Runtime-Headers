@class NSString;

@interface POUser : _POJWTBodyBase <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *loginUserName;
@property (readonly) NSString *generatedUUID;
@property (readonly) NSString *uniqueIdpIdentifier;
@property (readonly) NSString *uid;
@property (readonly) NSString *altSecurityIdentity;

- (id)copy;
- (id)mutableCopy;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uid;
- (id)loginUserName;
- (id)altSecurityIdentity;
- (id)generatedUUID;
- (id)uniqueIdpIdentifier;

@end
