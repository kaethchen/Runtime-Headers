@class NSXPCConnection;

@interface ACCCarPlay : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_init;
- (void)carPlayAppLinksStateForCertSerial:(id)a0 withReply:(id /* block */)a1;
- (void)carPlayIconStateForCertSerial:(id)a0 andAppCategories:(unsigned long long)a1 withReply:(id /* block */)a2;
- (void)carPlaySendConnectionTimeEvent:(long long)a0 connectionType:(long long)a1 eventTime:(id)a2;
- (void)carPlayStartSessionForConnectionID:(unsigned int)a0 properties:(id)a1;
- (void)filterMatchingDigitalCarKeys:(id)a0 forAccessory:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)isCarPlayPairedWithCertSerial:(id)a0 withReply:(id /* block */)a1;
- (void)isWirelessCarPlayAllowedForCertSerial:(id)a0 withReply:(id /* block */)a1;

@end
