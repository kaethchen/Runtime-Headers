@interface PLValueUtilties : NSObject

+ (long long)compare:(id)a0 with:(id)a1;
+ (id)formattedStringForDate:(id)a0;
+ (short)formatterFromDataType:(id)a0;
+ (BOOL)isFormater:(short)a0 validForObject:(id)a1;
+ (BOOL)isNil:(id)a0;
+ (void)resetTimestampFormaterTimezone;

@end
