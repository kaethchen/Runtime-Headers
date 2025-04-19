@class ISyncClient, NSArray, ISDRecordIdMapper, NSMutableSet, NSMutableDictionary, ISDRecordStore, NSMutableArray;
@protocol ISyncFiltering;

@interface ISDFiltratorThingy : NSObject {
    ISyncClient *_client;
    NSArray *_entities;
    ISDRecordIdMapper *_mapper;
    ISDRecordStore *_clientRecordStore;
    ISDRecordStore *_truthRecordStore;
    id<ISyncFiltering> _filter;
    BOOL _skipMarkingAsProcessed;
    NSMutableSet *_filteredOrRejectedIds;
    NSMutableSet *_currentRecordIdsForFilter;
    NSMutableDictionary *_recordIdsWithReferrersToRefilter;
    NSMutableSet *_recordIdsForFilter;
    NSMutableSet *_recordIdsToRejectOutOfHand;
    NSMutableSet *_processedRecords;
    NSMutableSet *_sourceIdsForFilter;
    NSMutableDictionary *_referringRelationshipNames;
    NSMutableDictionary *_requiredRelationshipNames;
    NSMutableArray *_unappliedRecordIds;
    NSMutableArray *_rejectedRecordIds;
    NSMutableArray *_modifiedRecordIds;
    NSMutableArray *_filteredRecordIds;
    NSMutableArray *_filterRemovedRecordIds;
    NSMutableArray *_filterReplacedRecordIds;
    NSMutableArray *_clearDirtyRecordIds;
    BOOL _isServerClientType;
}

- (void)dealloc;
- (BOOL)_checkForEmptyRequiredRelationshipsInRecord:(id)a0;
- (void)_createReferringAndRequiredRelationshipNamesMapping;
- (void)_markToRefilterRecordsReferringToRecordWithId:(id)a0;
- (void)_zapRecordIds:(id)a0 state:(int)a1 toBeApplied:(BOOL)a2;
- (void)applyFiltersToClientRecord:(id)a0 truthRecord:(id)a1;
- (void)cascadeTargetsFromRecord:(id)a0 forceRemove:(BOOL)a1;
- (id)entityDescriptionWithName:(id)a0;
- (void)filterRecords;
- (id)initWithFilter:(id)a0 client:(id)a1 entities:(id)a2 recordIdMapper:(id)a3 clientRecordStore:(id)a4 truthRecordStore:(id)a5;
- (BOOL)isServerClientType;
- (void)noteFilteredChangeForRecord:(id)a0 isNowFiltered:(BOOL)a1;
- (id)relationshipNamesReferringToEntityNamed:(id)a0;
- (void)setIsServerClientType:(BOOL)a0;
- (void)setRecordsIdsForFiltering:(id)a0;
- (void)setShouldApply:(BOOL)a0 recordWithId:(id)a1 clientRecord:(id)a2 truthRecord:(id)a3;

@end
