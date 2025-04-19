@class NSString;

@interface STUserIdentity : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int userIdentifier;
@property (readonly, nonatomic) BOOL hasUserIdentifier;
@property (readonly, copy, nonatomic) NSString *ODUUID;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithUserIdentifier:(unsigned int)a0;
- (id)initWithODUUID:(id)a0;
- (id)initWithUserIdentifier:(unsigned int)a0 ODUUID:(id)a1 displayName:(id)a2;
- (BOOL)matchesUserIdentity:(id)a0;

@end
