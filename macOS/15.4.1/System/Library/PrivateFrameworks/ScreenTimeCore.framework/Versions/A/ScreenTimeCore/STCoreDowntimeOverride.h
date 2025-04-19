@class NSString, STBlueprint, NSDate;
@protocol STSerializableManagedObject;

@interface STCoreDowntimeOverride : NSManagedObject <STSerializableManagedObject, STSyncableSubObject>

@property (nonatomic) long long type;
@property (nonatomic) long long state;
@property (copy) NSDate *creationDate;
@property (copy) NSString *calendarIdentifier;
@property (copy) NSDate *endDate;
@property (nonatomic) BOOL isTombstoned;
@property (retain) STBlueprint *downtime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<STSerializableManagedObject> syncableRootObject;

- (void)setType:(long long)a0;
- (long long)state;
- (long long)type;
- (void)setState:(long long)a0;
- (id)dictionaryRepresentation;
- (BOOL)validateForDelete:(id *)a0;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)_validateState:(id)a0;
- (BOOL)_validateAssociatedDowntime:(id)a0;
- (BOOL)_validateType:(id)a0;
- (BOOL)updateWithDictionaryRepresentation:(id)a0;

@end
