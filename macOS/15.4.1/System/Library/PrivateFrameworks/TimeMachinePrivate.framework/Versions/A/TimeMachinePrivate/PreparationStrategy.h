@class NSSet, NSArray, NSString, TMDisk;

@interface PreparationStrategy : NSObject

@property (readonly) TMDisk *destinationDisk;
@property (readonly) NSSet *sourceDisks;
@property (readonly) unsigned int encryptionIntent;
@property (readonly) unsigned int inheritanceIntent;
@property (readonly) NSArray *conflictingSourceDisks;
@property (readonly) BOOL requiresEncrypting;
@property (readonly) BOOL requiresDecrypting;
@property (readonly) BOOL requiresChangingToCaseSensitive;
@property (readonly) BOOL requiresRepartitioningAsGPT;
@property (readonly) BOOL requiresDeletingCSVolumeGroup;
@property (readonly) BOOL requiresErasing;
@property (readonly) BOOL requiresCreatingSibling;
@property (readonly) BOOL canBeReformatted;
@property (readonly) NSString *fileSystemPersonalityForReformatting;

- (void).cxx_destruct;
- (id)_physicalWholeDiskIdentifiersForMountPoint:(id)a0;
- (BOOL)hasCaseSensitiveSources;
- (id)initForDestinationDisk:(id)a0 sourceDisks:(id)a1 encryptionIntent:(unsigned int)a2 inheritanceIntent:(unsigned int)a3;

@end
