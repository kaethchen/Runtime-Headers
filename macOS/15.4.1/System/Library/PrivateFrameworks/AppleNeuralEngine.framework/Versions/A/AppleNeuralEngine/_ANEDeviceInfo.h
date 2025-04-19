@interface _ANEDeviceInfo : NSObject

+ (id)productName;
+ (id)buildVersion;
+ (BOOL)isInternalBuild;
+ (BOOL)hasANE;
+ (unsigned int)numANECores;
+ (id)aneSubType;
+ (id)bootArgs;
+ (BOOL)isVirtualMachine;
+ (id)aneSubTypeProductVariant;
+ (id)aneSubTypeVariant;
+ (unsigned int)numANEs;
+ (id)aneArchitectureType;
+ (long long)aneBoardType;
+ (BOOL)isBoolBootArgSetTrue:(id)a0;
+ (BOOL)isExcessivePowerDrainWhenIdle;
+ (BOOL)precompiledModelChecksDisabled;

@end
