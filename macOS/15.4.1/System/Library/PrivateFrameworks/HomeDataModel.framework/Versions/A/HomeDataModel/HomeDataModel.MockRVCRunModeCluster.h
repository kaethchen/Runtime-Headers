@class MTRRVCRunModeClusterChangeToModeResponseParams, NSArray, MTRRVCRunModeClusterChangeToModeParams, NSNumber, NSError;

@interface HomeDataModel.MockRVCRunModeCluster : MTRClusterRVCRunMode {
    void /* unknown type, empty encoding */ attributeStates;
    void /* unknown type, empty encoding */ commandObserver;
    void /* unknown type, empty encoding */ containingDevice;
    void /* unknown type, empty encoding */ lastKnownEndpointID;
    void /* unknown type, empty encoding */ clusterKind;
    void /* unknown type, empty encoding */ changeToModeBlock;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (void)changeToModeWithParams:(MTRRVCRunModeClusterChangeToModeParams *)a0 expectedValues:(NSArray *)a1 expectedValueInterval:(NSNumber *)a2 completion:(void (^)(MTRRVCRunModeClusterChangeToModeResponseParams *, NSError *))a3;

@end
