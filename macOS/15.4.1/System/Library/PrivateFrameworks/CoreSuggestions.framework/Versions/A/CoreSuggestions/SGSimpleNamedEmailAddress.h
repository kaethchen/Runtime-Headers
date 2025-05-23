@class NSString;

@interface SGSimpleNamedEmailAddress : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *name;

+ (id)emailToNameDictionaryWithNamedEmailAddresses:(id)a0;
+ (id)namedEmailAddressWithCSPerson:(id)a0;
+ (id)namedEmailAddressWithFieldValue:(id)a0;
+ (id)namedEmailAddressesWithEmailToNameDictionary:(id)a0;
+ (id)namedEmailAddressesWithFieldValues:(id)a0;
+ (id)serializeAll:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serialized;
- (id)asCSPerson;
- (id)initWithName:(id)a0 emailAddress:(id)a1;
- (id)initWithNamedHandle:(id)a0;
- (BOOL)isEqualToNamedEmailAddress:(id)a0;

@end
