@class NSMutableDictionary;

@interface KGDatabaseNameCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _loaded;
    NSMutableDictionary *_labelIdByName;
    NSMutableDictionary *_labelNameById;
    NSMutableDictionary *_attrIdByPropertyName;
    NSMutableDictionary *_propertyNameByAttrId;
    unsigned long long _highestLabelId;
    unsigned long long _highestAttrId;
    unsigned long long _useCount;
    BOOL _readOnly;
    BOOL _isInTransaction;
    BOOL _loadedInThisTransaction;
}

- (id)init;
- (void).cxx_destruct;
- (void)_addLabelName:(id)a0 identifier:(id)a1 database:(id)a2;
- (void)_addPropertyName:(id)a0 identifier:(id)a1 database:(id)a2;
- (void)_loadCacheIfNeeded:(id)a0;
- (id)attrIdentifierForPropertyName:(id)a0 database:(id)a1 updating:(BOOL)a2 error:(id *)a3;
- (id)labelIdentifierForName:(id)a0 database:(id)a1 updating:(BOOL)a2 error:(id *)a3;
- (id)labelNameForIdentifier:(id)a0 database:(id)a1;
- (id)propertyNameForIdentifier:(id)a0 database:(id)a1;
- (id)reportLabelIdentifiersByName;
- (id)reportLabelNamesByIdentifier;
- (void)setWritable;
- (void)transactionBegin;
- (void)transactionEnd;
- (void)unloadCache;

@end
