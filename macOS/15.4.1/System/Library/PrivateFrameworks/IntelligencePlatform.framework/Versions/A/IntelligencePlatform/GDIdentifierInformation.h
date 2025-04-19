@class NSArray;

@interface GDIdentifierInformation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *names;
@property (readonly, nonatomic) NSArray *contactIdentifiers;
@property (readonly, nonatomic) NSArray *visualIdentifiers;
@property (readonly, nonatomic) NSArray *emails;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNames:(id)a0 contactIdentifiers:(id)a1 visualIdentifiers:(id)a2 emails:(id)a3;

@end
