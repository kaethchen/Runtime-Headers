@interface MTRClusterTimeSynchronization : MTRGenericCluster

- (id)readAttributeUTCTimeWithParams:(id)a0;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeDSTOffsetListMaxSizeWithParams:(id)a0;
- (id)readAttributeDSTOffsetWithParams:(id)a0;
- (id)readAttributeDefaultNTPWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeGranularityWithParams:(id)a0;
- (id)readAttributeLocalTimeWithParams:(id)a0;
- (id)readAttributeNTPServerAvailableWithParams:(id)a0;
- (id)readAttributeSupportsDNSResolveWithParams:(id)a0;
- (id)readAttributeTimeSourceWithParams:(id)a0;
- (id)readAttributeTimeZoneDatabaseWithParams:(id)a0;
- (id)readAttributeTimeZoneListMaxSizeWithParams:(id)a0;
- (id)readAttributeTimeZoneWithParams:(id)a0;
- (id)readAttributeTrustedTimeSourceWithParams:(id)a0;
- (void)setDSTOffsetWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)setDefaultNTPWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)setTimeZoneWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)setTrustedTimeSourceWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)setUTCTimeWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;

@end
