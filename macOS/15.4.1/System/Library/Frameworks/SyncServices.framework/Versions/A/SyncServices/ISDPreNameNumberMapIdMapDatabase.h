@interface ISDPreNameNumberMapIdMapDatabase : ISDRecordIdMapDatabase

- (void)addMappings:(id)a0;
- (void)addMapping:(id)a0;
- (id)newIdMapForGlobalId:(id)a0 uniqueEntityNames:(id)a1;
- (id)newIdMapForLocalId:(id)a0 uniqueEntityNames:(id)a1;
- (void)removeMappingsForEntityNames:(id)a0;

@end
