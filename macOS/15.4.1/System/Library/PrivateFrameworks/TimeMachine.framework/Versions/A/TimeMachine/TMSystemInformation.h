@interface TMSystemInformation : NSObject

@property (class, readonly) BOOL isAppleInternal;

+ (id)macAddress;
+ (id)computerName;
+ (id)hardwareModelIdentifier;
+ (BOOL)hasInternalBattery;
+ (id)hostUUID;
+ (id)hostUUIDDerivedMachineAddress;
+ (BOOL)isClockMoreOrLessCorrect;
+ (BOOL)isNetBooted;

@end
