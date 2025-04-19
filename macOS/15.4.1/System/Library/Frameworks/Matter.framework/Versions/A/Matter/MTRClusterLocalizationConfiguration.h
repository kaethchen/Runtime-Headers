@interface MTRClusterLocalizationConfiguration : MTRGenericCluster

- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeActiveLocaleWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeSupportedLocalesWithParams:(id)a0;
- (void)writeAttributeActiveLocaleWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeActiveLocaleWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
