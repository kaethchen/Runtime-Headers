@class NSNumber, NSArray;

@interface CSNumericAnalysisTag : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSNumber *primaryValue;
@property (readonly, copy) NSArray *components;
@property (readonly, nonatomic) double confidence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCSCoder:(id)a0;
- (id)initWithPrimaryValue:(id)a0 components:(id)a1 confidence:(double)a2;

@end
