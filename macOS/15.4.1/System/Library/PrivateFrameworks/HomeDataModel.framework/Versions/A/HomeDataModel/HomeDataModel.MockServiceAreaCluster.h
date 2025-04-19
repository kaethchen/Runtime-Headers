@class MTRServiceAreaClusterSelectAreasResponseParams, NSArray, MTRServiceAreaClusterSelectAreasParams, MTRServiceAreaClusterSkipAreaResponseParams, NSError, NSNumber, MTRServiceAreaClusterSkipAreaParams;

@interface HomeDataModel.MockServiceAreaCluster : MTRClusterServiceArea {
    void /* unknown type, empty encoding */ attributeStates;
    void /* unknown type, empty encoding */ commandObserver;
    void /* unknown type, empty encoding */ containingDevice;
    void /* unknown type, empty encoding */ lastKnownEndpointID;
    void /* unknown type, empty encoding */ clusterKind;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (void)selectAreasWithParams:(MTRServiceAreaClusterSelectAreasParams *)a0 expectedValues:(NSArray *)a1 expectedValueInterval:(NSNumber *)a2 completion:(void (^)(MTRServiceAreaClusterSelectAreasResponseParams *, NSError *))a3;
- (void)skipAreaWithParams:(MTRServiceAreaClusterSkipAreaParams *)a0 expectedValues:(NSArray *)a1 expectedValueInterval:(NSNumber *)a2 completion:(void (^)(MTRServiceAreaClusterSkipAreaResponseParams *, NSError *))a3;

@end
