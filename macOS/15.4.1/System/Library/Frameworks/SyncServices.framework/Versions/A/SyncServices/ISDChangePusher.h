@class NSString, ISDRecord;

@interface ISDChangePusher : NSObject {
    NSString *_clientId;
    ISDRecord *_record;
    BOOL _clientFormatsRelationships;
}

- (void)dealloc;
- (BOOL)_addDeletedTuple:(id)a0 tuples:(id)a1;
- (id)changeBuilder:(id)a0 createChangeWithEntityName:(id)a1 recordId:(id)a2 changeType:(int)a3 deltas:(id)a4 fromGeneration:(unsigned int)a5 toGeneration:(unsigned int)a6;
- (id)changeBuilder:(id)a0 createDeltaBetweenOldValue:(id)a1 newValue:(id)a2 propertyDescription:(id)a3 name:(id)a4 lastModifiedGeneration:(unsigned int)a5;
- (void)changeBuilder:(id)a0 didCreateDelta:(id)a1 betweenOldValue:(id)a2 newValue:(id)a3;
- (void)createArrayOfFormattedTuples:(id *)a0 unformattedTuples:(id *)a1 byCombiningNewRecordIds:(id)a2 withOldTuples:(id)a3 oldUnformattedTuples:(id)a4 relationshipIsToMany:(BOOL)a5 builder:(id)a6;
- (id)initWithClientId:(id)a0 clientFormatsRelationships:(BOOL)a1;
- (void)prepareForNewChange:(id)a0;
- (void)updateRecordWithPropertyValue:(id)a0 unformattedRelationshipTuples:(id)a1 propertyDescription:(id)a2 name:(id)a3 lastModifiedGeneration:(unsigned int)a4 isDefaultValue:(BOOL)a5;

@end
