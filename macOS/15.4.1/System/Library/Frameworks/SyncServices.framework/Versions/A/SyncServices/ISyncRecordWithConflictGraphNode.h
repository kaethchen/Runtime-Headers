@class NSDictionary, ISDConflict;

@interface ISyncRecordWithConflictGraphNode : ISyncConcreteRecordGraphNode {
    ISDConflict *_isdConflict;
    NSDictionary *_freezeDriedRecord;
}

- (void)dealloc;
- (id)description;
- (id)record;
- (id)changedKeys;
- (void)setISDConflict:(id)a0;
- (id)conflictingPropertyNames;
- (id)conflictingValuesForPropertyName:(id)a0;
- (id)descriptionForEntireTreeTabs:(int)a0;
- (id)displayKeys;
- (id)freezeDriedRecord;
- (id)isdConflict;
- (BOOL)mergeChangesFromNode:(id)a0;
- (BOOL)mergeChildrenTree:(id)a0 atRelationship:(id)a1 childChangeType:(int)a2;
- (void)setFreezeDriedRecord:(id)a0;
- (void)setWinningClientId:(id)a0;

@end
