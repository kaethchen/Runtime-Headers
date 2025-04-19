@class VCConnectionIDS;

@interface VCTransportSessionIDSSingleLink : VCTransportSessionIDS

@property (retain, nonatomic) VCConnectionIDS *connection;

- (void)dealloc;
- (int)onStart;
- (void)handleLinkDisconnectedWithInfo:(id)a0;
- (id)copyActiveConnection;
- (int)createVFD:(int *)a0 forStreamType:(unsigned int)a1;
- (void)handleLinkConnectedWithInfo:(id)a0;
- (id)initWithNotificationQueue:(id)a0 reportingAgent:(struct opaqueRTCReporting { } *)a1;
- (int)updateTransportStream:(struct OpaqueVCTransportStream { } *)a0;

@end
