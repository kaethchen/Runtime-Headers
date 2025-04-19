@class CALayer;

@interface CARemoteLayerClient : NSObject {
    id _impl;
}

@property (readonly) unsigned int clientId;
@property (retain) CALayer *layer;

- (void)dealloc;
- (id)context;
- (void)invalidate;
- (id)initWithServerPort:(unsigned int)a0;

@end
