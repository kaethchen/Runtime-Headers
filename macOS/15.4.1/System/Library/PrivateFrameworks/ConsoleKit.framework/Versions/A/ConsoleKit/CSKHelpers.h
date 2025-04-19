@interface CSKHelpers : NSObject

+ (id)_newDateFormatter;
+ (id)formattedTimeFromDate:(id)a0 timeZone:(id)a1;
+ (id)_formattedDateFromDate:(id)a0 formatter:(id)a1 usecPosition:(int)a2;
+ (id)_localizedUsecStringFromDate:(id)a0;
+ (id)_newNumberFormatter;
+ (struct tm { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; long long x9; char *x10; } *)_timeStructFromDate:(id)a0 timeZone:(id)a1 usec:(unsigned long long *)a2;
+ (void)_updateTimeZoneDateFormattersWithDate:(id)a0 timeZone:(id)a1;
+ (id)formattedDateTimeFromDate:(id)a0 timeZone:(id)a1;
+ (id)formattedDateTimeTimeZoneFromDate:(id)a0 timeZone:(id)a1;
+ (id)formattedNumberFromUnsignedInteger:(unsigned long long)a0;
+ (id)formattedTimeTimeZoneFromDate:(id)a0 timeZone:(id)a1;

@end
