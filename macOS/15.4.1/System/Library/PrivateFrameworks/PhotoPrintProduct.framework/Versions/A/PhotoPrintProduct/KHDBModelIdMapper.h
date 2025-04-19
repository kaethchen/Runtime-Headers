@class KHDBLockedDictionary;

@interface KHDBModelIdMapper : NSObject {
    KHDBLockedDictionary *m_modelIdMap;
}

- (void)dealloc;
- (id)init;
- (void)addMappingForModelId:(id)a0 toModelId:(id)a1 forClass:(Class)a2;
- (id)convertModelId:(id)a0 forClass:(Class)a1;
- (id)modelIdMapForClass:(Class)a0;

@end
