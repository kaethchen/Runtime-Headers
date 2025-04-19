@class PHObjectReference, PHEntityKeyMap, NSString, PHPhotoLibrary, NSManagedObjectID;

@interface PHObject : NSObject <PHObject, PLLocalUUIDConverter, PHObjectFetchPropertySets, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertyHintLock;
    unsigned long long _propertyHintLock_propertyHint;
}

@property (class, readonly) PHEntityKeyMap *entityKeyMap;

@property (readonly, nonatomic) PHObjectReference *objectReference;
@property (readonly) NSManagedObjectID *objectID;
@property (readonly) id identifier;
@property (readonly, getter=isDeleted) BOOL deleted;
@property (readonly) unsigned long long propertyHint;
@property (readonly) NSString *uuid;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly, getter=isTransient) BOOL transient;
@property (readonly) id userInterfaceIdentifier;
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchPredicateForSharingFilter:(unsigned short)a0;
+ (BOOL)managedObjectSupportsScreenshot;
+ (Class)propertySetClassForPropertySet:(id)a0;
+ (void)assertAllObjects:(id)a0 forSelector:(SEL)a1 areOfType:(Class)a2;
+ (id)authorizationAwareFetchResultWithOptions:(id)a0 fetchBlock:(id /* block */)a1;
+ (id)entityKeyForPropertyKey:(id)a0;
+ (void)extendPropertiesToFetch:(id)a0 withProperties:(id)a1;
+ (void)extendPropertiesToFetch:(id)a0 withPropertySetClass:(Class)a1;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)identifierCodeFromLocalIdentifier:(id)a0;
+ (id)identifierPropertiesToFetch;
+ (id)internalSortDescriptorForPropertyKey:(id)a0 ascending:(BOOL)a1;
+ (BOOL)isValidCloudIdentifierStringValue:(id)a0;
+ (id)localIdentifierExpressionForFetchRequests;
+ (id)localIdentifierWithUUID:(id)a0;
+ (id)localIdentifiersWithUUIDs:(id)a0;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsAdjustments;
+ (BOOL)managedObjectSupportsAllowedForAnalysis;
+ (BOOL)managedObjectSupportsAssetStacks;
+ (BOOL)managedObjectSupportsBodyDetection;
+ (BOOL)managedObjectSupportsBursts;
+ (BOOL)managedObjectSupportsContributor;
+ (BOOL)managedObjectSupportsCreationType;
+ (BOOL)managedObjectSupportsCustomUUIDKey;
+ (BOOL)managedObjectSupportsDetectionType;
+ (BOOL)managedObjectSupportsDuplicateVisibilityState;
+ (BOOL)managedObjectSupportsFaceState;
+ (BOOL)managedObjectSupportsHiddenState;
+ (BOOL)managedObjectSupportsKeyFaces;
+ (BOOL)managedObjectSupportsMontage;
+ (BOOL)managedObjectSupportsPendingState;
+ (BOOL)managedObjectSupportsPersonFilters;
+ (BOOL)managedObjectSupportsRejectedState;
+ (BOOL)managedObjectSupportsSavedAssetType;
+ (BOOL)managedObjectSupportsShareExitingState;
+ (BOOL)managedObjectSupportsShareExpiredState;
+ (BOOL)managedObjectSupportsShareTrashedState;
+ (BOOL)managedObjectSupportsSharingComposition;
+ (BOOL)managedObjectSupportsTorsoOnly;
+ (BOOL)managedObjectSupportsTrashedState;
+ (BOOL)managedObjectSupportsVisibilityState;
+ (id)objectIDsMatchingEntityFromObjectIDs:(id)a0 context:(id)a1;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)a0;
+ (id)propertyKeyForEntityKey:(id)a0;
+ (id)propertySetAccessorsByPropertySet;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)a0;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)uuidFromLocalIdentifier:(id)a0;
+ (id)uuidsFromLocalIdentifiers:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_shortObjectIDURI;
- (void)addFetchPropertyHint:(unsigned long long)a0;
- (void)assertRequiredFetchPropertyHints:(unsigned long long)a0;
- (Class)changeRequestClass;
- (void)fetchPropertySetsIfNeeded;
- (BOOL)hasLoadedPropertySet:(id)a0;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
