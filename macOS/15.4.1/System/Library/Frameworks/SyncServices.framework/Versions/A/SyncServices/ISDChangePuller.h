@class NSMutableDictionary, ISDRecordIdMapper;

@interface ISDChangePuller : NSObject {
    ISDRecordIdMapper *_mapper;
    NSMutableDictionary *_record;
}

- (void)dealloc;
- (id)changeBuilder:(id)a0 createChangeWithEntityName:(id)a1 recordId:(id)a2 changeType:(int)a3 deltas:(id)a4 fromGeneration:(unsigned int)a5 toGeneration:(unsigned int)a6;
- (id)changeBuilder:(id)a0 createDeltaBetweenOldValue:(id)a1 newValue:(id)a2 propertyDescription:(id)a3 name:(id)a4 lastModifiedGeneration:(unsigned int)a5;
- (void)changeBuilder:(id)a0 didCreateDelta:(id)a1 betweenOldValue:(id)a2 newValue:(id)a3;
- (id)initWithRecordIdMapper:(id)a0;
- (void)prepareForNewChange;

@end
