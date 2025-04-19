@class NSString, NSXPCConnection;
@protocol TVISAmbientSettingsServiceInterface, TVISAmbientSettingsServiceDelegate;

@interface TVISAmbientSettingsServiceProxy : NSObject <TVISAmbientSettingsServiceObserverInterface, TVISAmbientSettingsServiceInterface>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<TVISAmbientSettingsServiceInterface> remoteProxy;
@property (weak, nonatomic) id<TVISAmbientSettingsServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)queryAerialThemesWithReply:(id /* block */)a0;
- (void)settingsDidUpdate;
- (void)updateActiveStateForAerialThemeWithID:(id)a0 activate:(BOOL)a1 reply:(id /* block */)a2;

@end
