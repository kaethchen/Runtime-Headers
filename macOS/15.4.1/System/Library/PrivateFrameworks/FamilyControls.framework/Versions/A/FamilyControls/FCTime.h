@interface FCTime : NSObject {
    int _hour;
    int _minute;
    int _second;
}

+ (id)timeWithString:(id)a0;
+ (id)midnight;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithString:(id)a0;
- (long long)compare:(id)a0;
- (id)stringValue;
- (int)seconds;
- (id)dateValue;
- (id)dateValueForDate:(id)a0;
- (id)initWithHour:(int)a0 minute:(int)a1 second:(int)a2;
- (id)justAfter;
- (id)justBefore;

@end
