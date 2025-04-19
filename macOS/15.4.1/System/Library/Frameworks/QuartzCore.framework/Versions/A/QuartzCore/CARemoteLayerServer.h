@interface CARemoteLayerServer : NSObject

@property (readonly) unsigned int serverPort;

+ (id)sharedServer;

- (id)init;
- (id)_init;

@end
