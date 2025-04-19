@interface MTRClusterGeneralCommissioning : MTRGenericCluster

- (void)writeAttributeBreadcrumbWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)armFailSafeWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)armFailSafeWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)commissioningCompleteWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)commissioningCompleteWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)commissioningCompleteWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)commissioningCompleteWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeBasicCommissioningInfoWithParams:(id)a0;
- (id)readAttributeBreadcrumbWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeLocationCapabilityWithParams:(id)a0;
- (id)readAttributeRegulatoryConfigWithParams:(id)a0;
- (id)readAttributeSupportsConcurrentConnectionWithParams:(id)a0;
- (id)readAttributeTCAcceptedVersionWithParams:(id)a0;
- (id)readAttributeTCAcknowledgementsRequiredWithParams:(id)a0;
- (id)readAttributeTCAcknowledgementsWithParams:(id)a0;
- (id)readAttributeTCMinRequiredVersionWithParams:(id)a0;
- (id)readAttributeTCUpdateDeadlineWithParams:(id)a0;
- (void)setRegulatoryConfigWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)setRegulatoryConfigWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)setTCAcknowledgementsWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)writeAttributeBreadcrumbWithValue:(id)a0 expectedValueInterval:(id)a1;

@end
