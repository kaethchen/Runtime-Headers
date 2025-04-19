@class NSMutableSet;
@protocol BMIdentifiable;

@interface BMSQLStoreManager : BMSQLStore

@property (readonly, nonatomic) NSMutableSet *managedTableNames;
@property (retain, nonatomic) id<BMIdentifiable> sessionEvent;

+ (id)migrations;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (BOOL)addManagedTable:(id)a0 derivedFromStream:(id)a1;
- (void)beginManagedSessionWithEvent:(id)a0;
- (BOOL)addManagedTable:(id)a0 derivedFromSource:(id)a1;
- (int)deleteRows:(id)a0 fromTable:(id)a1;
- (id)deleteRowsDerivedFromEvent:(id)a0;
- (id)deleteRowsDerivedFromEvents:(id)a0;
- (id)deleteRowsDerivedFromStream:(id)a0 eventIdentifier:(id)a1;
- (id)deleteRowsDerivedFromStream:(id)a0 eventIdentifiers:(id)a1;
- (void)endManagedSession;
- (id)managedTables;
- (void)prepareTriggerForTable:(id)a0;
- (id)sourcesForManagedTable:(id)a0;

@end
