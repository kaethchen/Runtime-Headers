@class NSString, NSXPCConnection;

@interface REAudioPlaybackHostingClientObject : NSObject <REAudioPlaybackHostingService>

@property (readonly) unsigned long long connectionIdentifier;
@property (readonly) NSXPCConnection *connection;
@property BOOL shouldRedactSensitiveInfoFromLogs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (id)initWithConnection:(id)a0 connectionIdentifier:(unsigned long long)a1;

@end
