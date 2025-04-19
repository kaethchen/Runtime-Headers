@class NSUnit;

@interface PPSUnit : NSObject

@property (readonly) NSUnit *unit;

+ (id)bytes;
+ (id)celsius;
+ (id)seconds;
+ (id)grams;
+ (id)kilobytes;
+ (id)megabytes;
+ (id)microseconds;
+ (id)milliseconds;
+ (id)nanoseconds;
+ (id)volts;
+ (id)dimensionless;
+ (BOOL)isValidUnitJSON:(id)a0;
+ (id)microWattHours;
+ (id)milliAmpereHours;
+ (id)milliAmperes;
+ (id)milliVolts;
+ (id)unitWithJSONObject:(id)a0;
+ (id)unitWithProto:(id)a0;

- (void).cxx_destruct;
- (id)json;
- (id)initWithUnit:(id)a0;
- (id)proto;

@end
