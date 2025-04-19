@class NSSet, NSString, NSArray, NSNumber;

@interface MXMSampleAttributeFilter : MXMSampleAttribute <NSCopying, NSSecureCoding> {
    NSArray *_matchingStringAttributeValues;
    NSArray *_matchingNumericAttributeValues;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL finite;
@property (readonly, nonatomic, getter=finite) BOOL isFinite;
@property (readonly, copy, nonatomic) id value;
@property (readonly, copy, nonatomic) NSSet *values;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSNumber *numericValue;
@property (readonly, copy, nonatomic) NSSet *stringValues;
@property (readonly, copy, nonatomic) NSSet *numericValues;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_matchesSampleAttributeNameWithName:(id)a0;
- (BOOL)_matchesSampleAttributeValueTypeWithAttributeValueType:(long long)a0;
- (BOOL)_matchesSampleAttributeValueWithValue:(id)a0;
- (id)initWithAttribute:(id)a0;
- (id)initWithAttributeName:(id)a0 numericValue:(id)a1;
- (id)initWithAttributeName:(id)a0 numericValues:(id)a1;
- (id)initWithAttributeName:(id)a0 stringValue:(id)a1;
- (id)initWithAttributeName:(id)a0 stringValues:(id)a1;
- (id)initWithAttributeName:(id)a0 valueType:(long long)a1 value:(id)a2;
- (BOOL)matchesSampleWithAttribute:(id)a0;

@end
