@class NSString;

@interface LNUserIdentity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *personaUniqueIdentifier;
@property (readonly, nonatomic) long long accessLevel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPersonaUniqueIdentifier:(id)a0 accessLevel:(long long)a1;
- (id)initWithPersonaUniqueIdentifier:(id)a0;

@end
