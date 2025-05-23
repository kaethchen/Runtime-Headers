@interface MTRClusterIdentify : MTRGenericCluster

- (void)identifyWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)identifyWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeIdentifyTimeWithParams:(id)a0;
- (id)readAttributeIdentifyTypeWithParams:(id)a0;
- (void)triggerEffectWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)triggerEffectWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)writeAttributeIdentifyTimeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeIdentifyTimeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
