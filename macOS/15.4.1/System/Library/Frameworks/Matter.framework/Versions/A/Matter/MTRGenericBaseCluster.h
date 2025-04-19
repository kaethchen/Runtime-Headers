@class MTRBaseDevice;

@interface MTRGenericBaseCluster : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;

@end
