@interface HKAllConceptSelection : HKConceptSelection

@property (readonly, nonatomic) BOOL value;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(BOOL)a0;

@end
