@interface FCUtilities : NSObject

+ (void)kickMCXDForUID:(unsigned int)a0;
+ (void)fcdListeningStatusChanged;
+ (void)fcdReadSettingsFor:(unsigned int)a0;
+ (id)shortTimeDurationStringForSeconds:(int)a0 includeSeconds:(BOOL)a1;
+ (id)timeDurationStringForSeconds:(int)a0;
+ (id)timeStringWithHourIndex:(int)a0;
+ (id)timeStringWithHourIndex:(int)a0 minuteIndex:(int)a1 twentyFour:(BOOL)a2;

@end
