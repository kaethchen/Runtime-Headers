@interface MTRClusterHEPAFilterMonitoring : MTRGenericCluster

- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeChangeIndicationWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeConditionWithParams:(id)a0;
- (id)readAttributeDegradationDirectionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeInPlaceIndicatorWithParams:(id)a0;
- (id)readAttributeLastChangedTimeWithParams:(id)a0;
- (id)readAttributeReplacementProductListWithParams:(id)a0;
- (void)resetConditionWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)resetConditionWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)writeAttributeLastChangedTimeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeLastChangedTimeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
