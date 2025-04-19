@class NSArray, NSDictionary, NSMutableDictionary, NSError, NSMutableSet;

@interface PLSearchIndexingIncrementalUpdateBatch : NSObject {
    NSArray *_workItems;
    long long _originalFlags;
    NSArray *_possibleEntities;
    NSMutableDictionary *_normalizedWorkItemsByIdentifiers;
    NSMutableSet *_identifiers;
}

@property (readonly, nonatomic) BOOL hasDonations;
@property (readonly, copy, nonatomic) NSArray *eligibleManagedObjects;
@property (readonly, copy, nonatomic) NSDictionary *partialUpdateMasks;
@property (readonly, copy, nonatomic) NSArray *ineligibleIdentifiers;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSArray *coalescedWorkItems;
@property (readonly, copy, nonatomic) NSArray *identifiersRequiringAdditionalWork;

- (void).cxx_destruct;
- (id)_descriptionForSearchableIdentifiers:(id)a0 ineligibleIdentifiers:(id)a1 entity:(unsigned long long)a2;
- (BOOL)_flagsAreAmbiguous;
- (BOOL)_flagsAreIncompatible;
- (unsigned long long)_inLibraryPerform_searchableEntityForAmbiguousIdentifier:(id)a0 library:(id)a1;
- (void)_inPerformBlock_coalesceWithLibrary:(id)a0;
- (void)_inPerformBlock_removeWorkItemsNotMatchingOriginalFlags;
- (void)_inPerformTransaction_processAmbiguousEntityJobsWithFlags:(long long)a0 library:(id)a1;
- (void)inPerformBlock_prepareDonationsWithLibrary:(id)a0;
- (void)inPerformTransaction_cleanUpWithSuccess:(BOOL)a0 library:(id)a1;
- (id)initWithWorkItems:(id)a0 flags:(long long)a1;
- (unsigned long long)targetEntity;

@end
