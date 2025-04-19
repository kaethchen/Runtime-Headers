@class NSString, NSData, NSDate;

@interface _NSSwiftTimeZone : _NSTimeZoneBridge {
    void /* unknown type, empty encoding */ timeZone;
    void /* unknown type, empty encoding */ lock;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) Class classForCoder;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long secondsFromGMT;
@property (nonatomic, readonly) NSString *abbreviation;
@property (nonatomic, readonly) BOOL daylightSavingTime;
@property (nonatomic, readonly) double daylightSavingTimeOffset;
@property (nonatomic, readonly) NSDate *nextDaylightSavingTimeTransition;

- (id)init;
- (void).cxx_destruct;
- (id)abbreviationForDate:(id)a0;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 data:(id)a1;
- (BOOL)isDaylightSavingTime;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (id)localizedName:(long long)a0 locale:(id)a1;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (long long)secondsFromGMTForDate:(id)a0;
- (id)replacementObjectForKeyedArchiver:(id)a0;

@end
