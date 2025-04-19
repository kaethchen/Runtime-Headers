@class NSString, NSArray, NSMutableDictionary, NSMutableArray;

@interface ISDConflict : NSObject {
    NSString *_recordId;
    NSString *_entityName;
    NSString *_dataClassName;
    NSArray *_identityKeys;
    NSMutableArray *_propertyConflicts;
    NSArray *_propertyDependencies;
    NSMutableDictionary *_deletedRecordMap;
}

- (void)dealloc;
- (id)description;
- (id)descriptionWithLocale:(id)a0 indent:(long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)entityName;
- (BOOL)isModified;
- (id)recordId;
- (id)propertyNames;
- (void)_addPropertyChanges:(id)a0 forDependentPropertyNames:(id)a1 fromClientId:(id)a2;
- (id)winningClientId;
- (void)addDeletedRecord:(id)a0;
- (void)addDependentPropertyValues:(id)a0 forDependentPropertyNames:(id)a1;
- (void)addPropertyChanges:(id)a0 forDependentPropertyNames:(id)a1;
- (void)clearModified;
- (id)clientIds;
- (id)conflictWithPropertyNames:(id)a0 areDefaultValues:(BOOL *)a1;
- (BOOL)containsConflictOnPropertyNames:(id)a0;
- (id)dataClassName;
- (id)deletedRecordMap;
- (id)identityKeys;
- (id)initWithRecordId:(id)a0 entityName:(id)a1 dataClassName:(id)a2 identityKeys:(id)a3;
- (id)propertyConflictForPropertyName:(id)a0;
- (id)propertyConflictForPropertyNames:(id)a0;
- (id)propertyConflicts;
- (void)purgeResolvedConflicts;
- (BOOL)removePropertyConflict:(id)a0;
- (id)resolvedPropertyConflicts;
- (void)setWinningClientId:(id)a0;
- (id)unresolvedPropertyConflicts;

@end
