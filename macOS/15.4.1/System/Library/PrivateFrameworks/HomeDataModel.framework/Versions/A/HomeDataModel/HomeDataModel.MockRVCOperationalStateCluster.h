@class NSArray, MTRRVCOperationalStateClusterOperationalCommandResponseParams, NSError, NSNumber;

@interface HomeDataModel.MockRVCOperationalStateCluster : MTRClusterRVCOperationalState {
    void /* unknown type, empty encoding */ attributeStates;
    void /* unknown type, empty encoding */ commandObserver;
    void /* unknown type, empty encoding */ containingDevice;
    void /* unknown type, empty encoding */ lastKnownEndpointID;
    void /* unknown type, empty encoding */ clusterKind;
    void /* unknown type, empty encoding */ supportsGoHomeCommand;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (void)goHomeWithExpectedValues:(NSArray *)a0 expectedValueInterval:(NSNumber *)a1 completion:(void (^)(MTRRVCOperationalStateClusterOperationalCommandResponseParams *, NSError *))a2;
- (void)pauseWithExpectedValues:(NSArray *)a0 expectedValueInterval:(NSNumber *)a1 completion:(void (^)(MTRRVCOperationalStateClusterOperationalCommandResponseParams *, NSError *))a2;
- (void)resumeWithExpectedValues:(NSArray *)a0 expectedValueInterval:(NSNumber *)a1 completion:(void (^)(MTRRVCOperationalStateClusterOperationalCommandResponseParams *, NSError *))a2;

@end
