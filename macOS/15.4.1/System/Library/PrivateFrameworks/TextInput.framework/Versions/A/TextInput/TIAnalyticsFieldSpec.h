@class NSString;

@interface TIAnalyticsFieldSpec : NSObject

@property (readonly, nonatomic) NSString *name;

+ (id)booleanFieldSpecWithName:(id)a0;
+ (id)enumFieldSpecWithName:(id)a0;
+ (id)floatFieldSpecWithName:(id)a0;
+ (id)floatFieldSpecWithName:(id)a0 maxValue:(double)a1;
+ (id)floatFieldSpecWithName:(id)a0 minValue:(double)a1;
+ (id)floatFieldSpecWithName:(id)a0 minValue:(double)a1 maxValue:(double)a2;
+ (id)floatFieldSpecWithName:(id)a0 minValue:(id)a1 maxValue:(id)a2 significantDigits:(id)a3;
+ (id)integerFieldSpecWithName:(id)a0;
+ (id)integerFieldSpecWithName:(id)a0 maxValue:(long long)a1;
+ (id)integerFieldSpecWithName:(id)a0 minValue:(long long)a1;
+ (id)integerFieldSpecWithName:(id)a0 minValue:(long long)a1 maxValue:(long long)a2;
+ (id)integerFieldSpecWithName:(id)a0 minValue:(id)a1 maxValue:(id)a2 significantDigits:(id)a3;
+ (id)stringFieldSpecWithName:(id)a0;
+ (id)stringFieldSpecWithName:(id)a0 allowedValues:(id)a1;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)errorFromNil;
- (id)errorFromValue:(id)a0 code:(long long)a1 message:(id)a2;

@end
