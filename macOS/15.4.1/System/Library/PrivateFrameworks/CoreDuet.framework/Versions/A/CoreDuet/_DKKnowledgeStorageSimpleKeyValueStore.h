@class _DKKnowledgeStorage, NSString;

@interface _DKKnowledgeStorageSimpleKeyValueStore : NSObject <_DKSimpleKeyValueStore> {
    _DKKnowledgeStorage *_storage;
    NSString *_domain;
}

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
