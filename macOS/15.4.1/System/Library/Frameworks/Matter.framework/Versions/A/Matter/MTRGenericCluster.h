@class MTRDevice;

@interface MTRGenericCluster : MTRCluster

@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;

@end
