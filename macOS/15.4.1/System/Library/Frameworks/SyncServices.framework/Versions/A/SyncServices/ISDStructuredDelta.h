@class ISyncSession, ISDClientState, NSMutableDictionary;

@interface ISDStructuredDelta : NSObject {
    ISDClientState *_clientState;
    NSMutableDictionary *_supportedPropertyNames;
    NSMutableDictionary *_syncStates;
    NSMutableDictionary *_entities;
    unsigned int _currentGeneration;
    id _changePusher;
    id _changePuller;
    ISyncSession *_relationshipValidationDelegate;
    BOOL _clientIsTrusted;
    BOOL _clientFormatsRelationships;
}

+ (id)_localRecordIdentifiersFromTuples:(id)a0 usingRecordIdMapper:(id)a1;
+ (id)_newRelationshipTuplesByApplyingRecordIds:(id)a0 toRelationshipWithName:(id)a1 tuples:(id)a2 lastModifiedGeneration:(unsigned int)a3 lastModifiedByClientId:(id)a4 forClient:(id)a5;
+ (void)applyRecordDictionary:(id)a0 toRecord:(id)a1 forClient:(id)a2 generation:(unsigned int)a3 entity:(id)a4 syncState:(id)a5 takeUnformattedRelationshipsFromRecord:(id)a6 saveUnformattedValues:(BOOL)a7 ignoredProperties:(id)a8;
+ (id)changeByApplyingChange:(id)a0 toChange:(id)a1;
+ (id)recordDictionaryByApplyingChange:(id)a0 toRecordDictionary:(id)a1;
+ (id)recordDictionaryFromRecord:(id)a0 usingRecordIdMapper:(id)a1;
+ (id)recordDictionaryFromRecord:(id)a0 usingRecordIdMapper:(id)a1 useUnformattedValues:(BOOL)a2;
+ (void)updateISDChangeByApplyingISDChange:(id)a0 toChange:(id)a1;

- (void)dealloc;
- (void)_validateChange:(id)a0 againstEntity:(id)a1;
- (id)changeForClientBetweenOldRecord:(id)a0 newRecord:(id)a1;
- (id)changeForMinglerBetweenOldRecord:(id)a0 newChange:(id)a1 recordId:(id)a2 applyDeltasToRecord:(id)a3;
- (id)changeForMinglerBetweenOldRecord:(id)a0 newRecordDictionary:(id)a1 recordId:(id)a2 applyDeltasToRecord:(id)a3;
- (id)createChangeBuilderForPushingChangesFromRecord:(id)a0 recordId:(id)a1 entityName:(id)a2;
- (id)initWithClientState:(id)a0 syncStates:(id)a1 entities:(id)a2 currentGeneration:(unsigned int)a3 clientIsTrusted:(BOOL)a4;
- (id)initWithClientState:(id)a0 syncStates:(id)a1 entities:(id)a2 currentGeneration:(unsigned int)a3 clientIsTrusted:(BOOL)a4 clientFormatsRelationships:(BOOL)a5;
- (void)prepareChangePusherToUpdateRecord:(id)a0 clientFormatsRelationships:(BOOL)a1;
- (void)setRelationshipValidationDelegate:(id)a0;

@end
