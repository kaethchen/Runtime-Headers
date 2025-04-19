@interface _BMDevicePowerLibraryNode : _BMLibraryNode

+ (id)identifier;
+ (id)PluggedIn;
+ (id)BatteryLevel;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)sublibraries;
+ (id)LowPowerMode;
+ (id)EnergyMode;
+ (id)storeConfigurationForEnergyMode;
+ (id)configurationForBatteryLevel;
+ (id)configurationForEnergyMode;
+ (id)configurationForLowPowerMode;
+ (id)configurationForPluggedIn;
+ (id)storeConfigurationForBatteryLevel;
+ (id)storeConfigurationForLowPowerMode;
+ (id)storeConfigurationForPluggedIn;
+ (id)syncPolicyForBatteryLevel;
+ (id)syncPolicyForEnergyMode;
+ (id)syncPolicyForLowPowerMode;
+ (id)syncPolicyForPluggedIn;

@end
