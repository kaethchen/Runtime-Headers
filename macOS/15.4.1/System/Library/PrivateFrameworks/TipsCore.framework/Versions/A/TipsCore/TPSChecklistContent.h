@class NSString;

@interface TPSChecklistContent : TPSContent

@property (copy, nonatomic) NSString *subtitle;

+ (BOOL)supportsSecureCoding;
+ (id)na_identity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;

@end
