@class ISDRecordStore, NSString, NSDictionary, NSMutableDictionary, NSMutableSet, ISDEntity, NSMutableArray;

@interface ISDChangeBuilder : NSObject {
    NSDictionary *_supportedPropertyNames;
    id _delegate;
    NSString *_recordId;
    NSString *_clientId;
    unsigned int _fromGeneration;
    unsigned int _toGeneration;
    BOOL _produceDeletesForMissingNewValues;
    BOOL _hasOldRecord;
    BOOL _hasNewRecord;
    BOOL _newRelationshipValuesAreTuples;
    BOOL _takeMissingCodependentValuesFromOldValues;
    ISDEntity *_entity;
    NSMutableDictionary *_oldValues;
    NSDictionary *_oldUnformattedRelationships;
    NSMutableDictionary *_newValues;
    NSMutableSet *_deletedPropertyNames;
    NSMutableSet *_missingCodependentPropertyNames;
    NSMutableArray *_deltas;
    id _change;
    BOOL _clientIsTrusted;
    BOOL _isPushingTruth;
    ISDRecordStore *_clientRecordStore;
    NSMutableDictionary *_relationshipNewReferences;
    NSMutableArray *_defaultPropertyNames;
}

- (void)dealloc;
- (void)setDelegate:(id)a0;
- (id)entity;
- (id)change;
- (void)setHasOldValue:(BOOL)a0;
- (id)recordId;
- (BOOL)_isDefaultValue:(id)a0;
- (BOOL)_isTargetIdFiltered:(id)a0;
- (id)_newUndeletedRecordIdsFromTuples:(id)a0;
- (void)_removeNullValuesAndDefaultPropertyNamesFromDictionary:(id)a0;
- (int)actionFromDeltaDictionary:(id)a0 inChange:(id)a1;
- (void)buildDeltas;
- (void)buildDeltasForExistingProperties;
- (void)buildDeltasForMissingCodependentProperties;
- (void)buildDeltasForNewProperties;
- (void)computeActualChangesNewValues:(id)a0 oldValues:(id)a1 forProperty:(id)a2;
- (id)initWithClientId:(id)a0 recordId:(id)a1 entity:(id)a2 propertyNamesSynchronizedByClient:(id)a3 lastModifiedGeneration:(unsigned int)a4 currentGeneration:(unsigned int)a5 clientIsTrusted:(BOOL)a6 clientState:(id)a7;
- (BOOL)isOldValue:(id)a0 equalToNewValue:(id)a1 propertyDescription:(id)a2;
- (BOOL)isPushingTruth;
- (BOOL)isSpecialGlobalProperty:(id)a0 propertyDescription:(id *)a1;
- (void)makeSureToPushCodependentPropertiesForPropertyName:(id)a0;
- (id)relationshipNewReferences;
- (void)setIsPushingTruth:(BOOL)a0;
- (void)setProduceDeletesForMissingNewValues:(BOOL)a0;
- (void)setShouldTakeMissingCodependentValuesFromOldValues:(BOOL)a0;
- (BOOL)shouldCreateDeltaBetweenOldValue:(id)a0 newValue:(id)a1 propertyDescription:(id)a2;
- (BOOL)shouldCreateDeltaForProperty:(id)a0;
- (void)takeNewValuesFromChange:(id)a0;
- (void)takeNewValuesFromDictionary:(id)a0;
- (void)takeNewValuesFromRecord:(id)a0;
- (void)takeOldValuesFromRecord:(id)a0;
- (id)unformattedTuplesForRelationshipName:(id)a0;
- (void)validateValue:(id)a0 forPropertyDescription:(id)a1;

@end
