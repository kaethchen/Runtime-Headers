@interface PowerUICECUtilities : NSObject

+ (id)log;
+ (BOOL)deviceWasRestartedWithDefaults:(id)a0;
+ (id)fetchEstimatedCountryCode;
+ (BOOL)isDemoCECSupported;
+ (BOOL)isDemoCecFlagEnabledForStore;
+ (BOOL)isDemoDevice;
+ (BOOL)isPluggedIntoEligiblePowerSourceWithContext:(id)a0;

@end
