@interface HMDLegacyCloudDatabase : HMBCloudDatabase

+ (id)recordZoneIDForLegacyName:(id)a0;

- (id)initWithLocalDatabase:(id)a0 configuration:(id)a1;
- (id)createLegacyZone:(id)a0 controllerIdentity:(id)a1 delegate:(id)a2 error:(id *)a3;
- (id)mirrorLegacyZone:(id)a0 controllerIdentity:(id)a1 delegate:(id)a2 error:(id *)a3;

@end
