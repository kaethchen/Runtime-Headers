@class NSString;

@interface AKProtoAccountContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *lastName;
@property (nonatomic) unsigned long long ageRange;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGivenName:(id)a0 lastName:(id)a1 ageRange:(unsigned long long)a2;

@end
