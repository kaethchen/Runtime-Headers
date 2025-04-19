@class NSString, HKMedicalCodingCollection;

@interface HKConceptResolutionDefinition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKMedicalCodingCollection *codingCollection;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) long long recordCategoryType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCodingCollection:(id)a0 countryCode:(id)a1;
- (id)initWithCodingCollection:(id)a0 countryCode:(id)a1 recordCategoryType:(long long)a2;

@end
