@class NSString;

@interface ABConstraintDescription : NSObject

@property (readonly, copy) NSString *viewName1;
@property (readonly) long long attribute1;
@property (readonly) long long relation;
@property (readonly, copy) NSString *viewName2;
@property (readonly) long long attribute2;
@property (readonly) double constantSign;
@property (readonly) double constantValue;
@property (readonly, copy) NSString *constantName;
@property (readonly) float priorityValue;
@property (readonly) NSString *priorityName;

+ (id)makeTwoAttributeConstraintRegex;
+ (long long)attributeFromString:(id)a0;
+ (id)constraintDescriptionWithString:(id)a0;
+ (id)constraintWithGenericFormat:(id)a0 metrics:(id)a1 views:(id)a2;
+ (id)descriptionWithString:(id)a0 match:(id)a1 viewName1Range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 atribute1Range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 relationRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 viewName2Range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 attriute2Range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 requiresConstantSign:(BOOL)a7 constantSignRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a8 constantValueRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a9 constantNameRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a10 priorityValueRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a11 priorityNameRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a12;
+ (id)makeSingleAttributeConstraintRegex;
+ (long long)relationFromString:(id)a0;
+ (id)singleAttributeConstraintDescriptionWithString:(id)a0;
+ (id)twoAttributeConstraintDescriptionWithString:(id)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)constraintWithMetrics:(id)a0 views:(id)a1;
- (id)initWithViewName1:(id)a0 attribute1:(long long)a1 relation:(long long)a2 viewName2:(id)a3 attribute2:(long long)a4 constantSign:(double)a5 constantValue:(double)a6 constantName:(id)a7 priorityValue:(float)a8 priorityName:(id)a9;

@end
