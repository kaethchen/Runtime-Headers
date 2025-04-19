@class NSString, QCNumberPort, QCStringPort;

@interface QCDateFormatter : QCPatch {
    QCNumberPort *inputTime;
    QCStringPort *outputString;
    NSString *_zoneName;
    long long _dateStyle;
    long long _timeStyle;
    NSString *_format;
    double _lastTime;
    double _resolution;
    struct __CFDateFormatter { } *_formatter;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)timeZoneNames;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (void)setDateStyle:(long long)a0;
- (void)setTimeStyle:(long long)a0;
- (long long)dateStyle;
- (long long)timeStyle;
- (void)setTimeZoneName:(id)a0;
- (id)timeZoneName;
- (id)formatString;
- (void)setFormatString:(id)a0;
- (BOOL)setup:(id)a0;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
