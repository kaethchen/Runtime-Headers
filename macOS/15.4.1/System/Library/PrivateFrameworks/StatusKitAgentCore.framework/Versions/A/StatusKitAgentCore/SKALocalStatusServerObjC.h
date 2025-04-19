@class SKALocalStatusServer;

@interface SKALocalStatusServerObjC : NSObject

@property (retain, nonatomic) SKALocalStatusServer *server;

- (void).cxx_destruct;
- (void)shutdown;
- (id)initWithIDSDeviceProvider:(id)a0;

@end
