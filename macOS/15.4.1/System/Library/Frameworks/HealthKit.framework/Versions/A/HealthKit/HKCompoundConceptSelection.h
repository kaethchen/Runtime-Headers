@class NSArray;

@interface HKCompoundConceptSelection : HKConceptSelection

@property (readonly, copy, nonatomic) NSArray *selections;
@property (readonly, nonatomic) unsigned long long operationType;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSelections:(id)a0 operationType:(unsigned long long)a1;

@end
