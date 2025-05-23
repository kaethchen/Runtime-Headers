@interface MTRClusterGroups : MTRGenericCluster

- (void)addGroupIfIdentifyingWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)addGroupIfIdentifyingWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)addGroupWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)addGroupWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)getGroupMembershipWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)getGroupMembershipWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeNameSupportWithParams:(id)a0;
- (void)removeAllGroupsWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)removeAllGroupsWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeAllGroupsWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)removeAllGroupsWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)removeGroupWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)removeGroupWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)viewGroupWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)viewGroupWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;

@end
