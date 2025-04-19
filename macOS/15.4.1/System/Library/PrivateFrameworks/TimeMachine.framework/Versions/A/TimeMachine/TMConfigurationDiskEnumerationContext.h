@class NSSet;

@interface TMConfigurationDiskEnumerationContext : NSObject

@property (copy) NSSet *excludedVolumeUUIDs;
@property (copy) NSSet *includedVolumeUUIDs;
@property (copy) NSSet *pathsForVolumesExcludedByAliases;
@property (copy) NSSet *pathsForVolumesIncludedByAliases;
@property (copy) NSSet *pathsForVolumesWithLocalUserAccounts;
@property (copy) NSSet *pathsForDestinationVolumes;

- (void).cxx_destruct;

@end
