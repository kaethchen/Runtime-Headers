@interface CNCDIOSLegacyIdentifierRegistrationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long requestedContactIdentifierCount;
@property (nonatomic) unsigned long long requestedGroupIdentifierCount;
@property (nonatomic) unsigned long long requestedContainerIdentifierCount;
@property (nonatomic) unsigned long long requestedInfoIdentifierCount;
@property (nonatomic) unsigned long long requestedMultivalueIdentifierCount;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
