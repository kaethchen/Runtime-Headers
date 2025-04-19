@class NSString, NSXPCConnection;

@interface ATXSettingsActionsClient : NSObject <ATXSettingsActionsInterface> {
    NSXPCConnection *_xpcConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
