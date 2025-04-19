@class NSString;

@interface BCSBusinessEmailIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *fullDomain;
@property (copy, nonatomic) NSString *topLevelDomain;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEmail:(id)a0 fullDomain:(id)a1 topLevelDomain:(id)a2;
- (id)initWithDefaultsDictionary:(id)a0;
- (BOOL)matchesIdentifier:(id)a0;

@end
