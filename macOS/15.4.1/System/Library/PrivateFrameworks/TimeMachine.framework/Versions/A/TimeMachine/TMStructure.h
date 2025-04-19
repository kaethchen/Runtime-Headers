@class NSString, NSArray, NSURL, NSMutableOrderedSet;
@protocol TMStructureProtocol;

@interface TMStructure : NSObject <TMStructureProtocol, AdoptingParentStructure>

@property (class, readonly) unsigned long long version;
@property (class, readonly) NSString *structurePathComponentPattern;
@property (class, readonly) NSString *structureType;

@property (retain) NSURL *url;
@property (readonly) NSMutableOrderedSet *mutableChildren;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } childrenLock;
@property (readonly) NSString *structureType;
@property (readonly, retain) NSString *uuid;
@property (weak) id<TMStructureProtocol> parent;
@property BOOL needsRefreshFromDisk;
@property (readonly) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URLForBuildUnderURL:(id)a0 error:(id *)a1;
+ (id)_coreStructureClasses;
+ (void)_preorderEnumerateStructureTree:(id)a0 depth:(unsigned long long)a1 enumerator:(id /* block */)a2;
+ (id)annotatedStateAtURL:(id)a0;
+ (id)backupStoreRootForVolumeURL:(id)a0 error:(id *)a1;
+ (id)builtUnderURL:(id)a0 parent:(id)a1 error:(id *)a2;
+ (id)closestAncestorStructureOfURL:(id)a0;
+ (id)closestAncestorStructureTypeToURL:(id)a0 isStructureRoot:(out BOOL *)a1;
+ (void)enumerateUnderURL:(id)a0 parent:(id)a1 enumerator:(id /* block */)a2;
+ (id)foundStructureAtURL:(id)a0 error:(id *)a1;
+ (BOOL)getMetadataAtURL:(id)a0 metadata:(out id *)a1 error:(out id *)a2;
+ (id)machineStoresForVolumeURL:(id)a0 error:(id *)a1;
+ (id)makeAvailableAtURL:(id)a0;
+ (BOOL)pathComponentResemblesStructure:(id)a0;
+ (void)preorderEnumerateStructureTree:(id)a0 enumerator:(id /* block */)a1;
+ (id)readAtURL:(id)a0 parent:(id)a1 error:(id *)a2;
+ (BOOL)setMetadata:(id)a0 atURL:(id)a1 error:(out id *)a2;
+ (long long)stateAtURL:(id)a0;
+ (id)structureTypeAtURL:(id)a0;
+ (id)upgradeStructureAtURL:(id)a0 oldState:(id)a1 error:(id *)a2;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addChild:(id)a0;
- (void)removeChild:(id)a0;
- (id)childrenOfType:(id)a0;
- (id)treeDescription;
- (long long)refreshFromDisk;
- (id)URLForAdoptionOfChild:(id)a0 error:(id *)a1;
- (id)URLForChangedParentURL:(id)a0;
- (void)_parentChangedURL;
- (void)_updateURL:(id)a0;
- (BOOL)adoptChildStructure:(id)a0 error:(id *)a1;
- (BOOL)buildAtURL:(id)a0 parentURL:(id)a1 error:(id *)a2;
- (id)deleteFromDiskWithCancelBlock:(id /* block */)a0 error:(id *)a1;
- (id)initWithUUID:(id)a0 url:(id)a1;
- (BOOL)prepareForReuse:(id *)a0;
- (void)removeChildren;
- (BOOL)rename:(id)a0 error:(id *)a1;
- (BOOL)reuseAtURL:(id)a0 error:(id *)a1;

@end
