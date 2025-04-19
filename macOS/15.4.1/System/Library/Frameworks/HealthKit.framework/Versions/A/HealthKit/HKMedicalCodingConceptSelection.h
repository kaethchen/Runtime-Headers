@class HKMedicalCoding;

@interface HKMedicalCodingConceptSelection : HKConceptSelection

@property (readonly, copy, nonatomic) HKMedicalCoding *coding;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMedicalCoding:(id)a0;

@end
