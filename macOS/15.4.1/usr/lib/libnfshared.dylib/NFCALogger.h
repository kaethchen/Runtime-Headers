@class NSUserDefaults;

@interface NFCALogger : NSObject {
    NSUserDefaults *_userDefault;
}

+ (unsigned int)getBatteryPercent;
+ (unsigned long long)roundToSignificantDigit:(unsigned long long)a0 forValue:(unsigned long long)a1;
+ (id)sharedCALogger;

- (id)init;
- (void).cxx_destruct;
- (BOOL)restrictedMode;
- (unsigned long long)getTimestamp;
- (BOOL)_incrementMiddlewareExceptionCountWithReset:(BOOL)a0;
- (id)generateDailyUUIDForCA;
- (id)generateUUID;
- (id)getCALoggerUserDefaults;
- (void)getCAUniversityCode:(id)a0 universityCodes:(unsigned int *)a1;
- (unsigned int)getDurationFrom:(unsigned long long)a0;
- (unsigned int)getHardwareTypeForCA:(unsigned int)a0;
- (unsigned long long)getMiddlewareExceptionCount;
- (void)postCAEventFor:(id)a0 eventInput:(id)a1;
- (void)removeRestrictedMode;
- (void)resetCALoadStackExceptionCount;
- (void)setRestrictedMode:(BOOL)a0;

@end
