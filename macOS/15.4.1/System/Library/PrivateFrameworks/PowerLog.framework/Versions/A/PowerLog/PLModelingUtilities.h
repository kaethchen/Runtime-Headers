@interface PLModelingUtilities : NSObject

+ (BOOL)internalBuild;
+ (BOOL)isMac;
+ (BOOL)isiPad;
+ (BOOL)isiPhone;
+ (BOOL)isWatch;
+ (BOOL)alsCurveHigherThanDefault;
+ (BOOL)carrierBuild;
+ (double)defaultBatteryEnergyCapacity;
+ (double)duetDiscretionaryBudget;
+ (double)getDefaultL0bThresholdForDeviceType;
+ (BOOL)isARMMac;
+ (BOOL)isAppleTV;
+ (BOOL)isAppleVision;
+ (BOOL)isHeySiriAlwaysOn;
+ (BOOL)isHomePod;
+ (BOOL)isLowPowerModeSupported;
+ (BOOL)isNarrowScreen;
+ (BOOL)isPercentageSupported;
+ (BOOL)isTVOS;
+ (BOOL)isiPod;
+ (double)networkingEnergyWithBytes:(int)a0 withDuration:(double)a1;
+ (BOOL)shouldShowBatteryGraphs;
+ (id)valueForMobileGestaltCapability:(id)a0;

@end
