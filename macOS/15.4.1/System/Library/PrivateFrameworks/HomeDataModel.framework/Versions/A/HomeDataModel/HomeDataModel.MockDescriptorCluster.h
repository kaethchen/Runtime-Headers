@interface HomeDataModel.MockDescriptorCluster : MTRClusterDescriptor {
    void /* unknown type, empty encoding */ _endpointID;
    void /* unknown type, empty encoding */ containingDevice;
    void /* unknown type, empty encoding */ clusterKind;
    void /* unknown type, empty encoding */ deviceTypeValues;
    void /* unknown type, empty encoding */ otherAttributeStates;
    void /* unknown type, empty encoding */ commandObserver;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;

@end
