@class NSDateComponentsFormatter;

@interface VUIDurationValueTransformer : NSValueTransformer

@property (retain, nonatomic) NSDateComponentsFormatter *hoursMinutesFormatter;
@property (retain, nonatomic) NSDateComponentsFormatter *secondsFormatter;

+ (void)initialize;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)init;
- (void).cxx_destruct;
- (id)transformedValue:(id)a0;

@end
