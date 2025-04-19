@class NSString, NSNumber, NSArray;

@interface LCFFeatureValue : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *valueInString;
@property (readonly, nonatomic) NSNumber *intValue;
@property (readonly, nonatomic) NSNumber *doubleValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSNumber *boolValue;
@property (readonly, nonatomic) NSNumber *timeBucketValue;
@property (readonly, nonatomic) NSArray *doubleArray;

- (void).cxx_destruct;
- (id)initWithBoolValue:(id)a0;
- (id)initWithDoubleArray:(id)a0;
- (id)initEmpty;
- (id)initWithStringValue:(id)a0;
- (id)getTypeDBString;
- (id)initWithDoubleValue:(id)a0;
- (id)initWithIntValue:(id)a0;
- (id)initWithTimeBucketValue:(id)a0;
- (BOOL)isNullValue;

@end
