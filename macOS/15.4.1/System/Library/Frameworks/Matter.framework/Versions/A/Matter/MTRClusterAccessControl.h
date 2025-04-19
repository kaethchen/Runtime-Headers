@interface MTRClusterAccessControl : MTRGenericCluster

- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)readAttributeACLWithParams:(id)a0;
- (id)readAttributeARLWithParams:(id)a0;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAccessControlEntriesPerFabricWithParams:(id)a0;
- (id)readAttributeAclWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeCommissioningARLWithParams:(id)a0;
- (id)readAttributeExtensionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeSubjectsPerAccessControlEntryWithParams:(id)a0;
- (id)readAttributeTargetsPerAccessControlEntryWithParams:(id)a0;
- (void)reviewFabricRestrictionsWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)writeAttributeACLWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeACLWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeAclWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeAclWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeExtensionWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeExtensionWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
