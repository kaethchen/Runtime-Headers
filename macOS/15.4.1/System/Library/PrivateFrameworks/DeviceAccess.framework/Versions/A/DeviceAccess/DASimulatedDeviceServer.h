@class NSString, CUTCPServer, NSMutableSet, CUBonjourAdvertiser, NSObject;
@protocol OS_dispatch_queue;

@interface DASimulatedDeviceServer : NSObject {
    BOOL _activateCalled;
    CUBonjourAdvertiser *_bonjourAdvertiser;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableSet *_tcpConnections;
    CUTCPServer *_tcpServer;
}

@property (copy, nonatomic) NSString *deviceBonjourServiceType;
@property (copy, nonatomic) NSString *deviceIdentitifer;
@property (copy, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)description;
- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_invalidate;
- (void)_invalidated;
- (id)descriptionWithLevel:(int)a0;
- (void)_connectionAccept:(id)a0;
- (void)_connectionEnded:(id)a0;

@end
