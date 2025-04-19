@class NSArray, NSMutableDictionary;

@interface TMRulesEngine : NSObject <TMRulesEngineProtocol> {
    NSMutableDictionary *_deviceEngineMap;
}

@property BOOL systemFilesExcluded;
@property (copy) NSArray *pathExclusions;
@property (copy) NSArray *volumeUUIDExclusions;
@property (copy) NSArray *standardExclusionPaths;
@property (readonly, copy) NSArray *deviceRulesEngines;
@property (readonly, copy) NSArray *appManagedExclusionPaths;
@property (readonly, copy) NSArray *userManagedExclusionPaths;
@property (readonly, copy) NSArray *mountPointsForIncludedDisks;

+ (id)_standardExclusionPathsForRuleSet:(unsigned int)a0;
+ (long long)exclusionStatusForURL:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)rulesEngineForStandardBackupOfVolumes:(id)a0 pathExclusions:(id)a1 excludedVolumeUUIDs:(id)a2 findStickyExclusionsUsingSpotlight:(BOOL)a3 qos:(long long)a4 error:(id *)a5 cancelBlock:(id /* block */)a6;
+ (id)rulesEngineUsingBOM:(id)a0 findStickyExclusionsUsingSpotlight:(BOOL)a1 qos:(long long)a2 cancelBlock:(id /* block */)a3;
+ (id)rulesEngineUsingBaseRuleSet:(unsigned int)a0 sourceVolumes:(id)a1 pathExclusions:(id)a2 excludedVolumeUUIDs:(id)a3 findStickyExclusionsUsingSpotlight:(BOOL)a4 qos:(long long)a5 cancelBlock:(id /* block */)a6;

- (id)init;
- (void).cxx_destruct;
- (void)addDeviceRulesEngine:(id)a0;
- (id)includedDisks;
- (id)rulesEngineForDevice:(int)a0;

@end
