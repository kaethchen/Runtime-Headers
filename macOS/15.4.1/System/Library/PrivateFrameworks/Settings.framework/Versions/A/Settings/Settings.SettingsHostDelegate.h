@interface Settings.SettingsHostDelegate : NSObject <Settings.SettingsPrivateHostProtocol>

- (id)init;
- (void).cxx_destruct;
- (void)switchTo:(id)a0 arguments:(id)a1;
- (void)displayScene:(id)a0 fromExtension:(id)a1 title:(id)a2 completion:(id /* block */)a3;
- (void)signalWithMilestone:(id)a0;
- (void)updateAccessoryViewForExtensionIdentifier:(id)a0 sceneName:(id)a1 with:(id)a2;
- (void)updateTitlebarWithConfig:(id)a0;
- (void)didBeginHosting;
- (void)didEndHosting:(id)a0;
- (void)navigationStackDidChange:(id)a0;
- (void)navigationSubtitleDidChange:(id)a0;
- (void)navigationTitleDidChange:(id)a0;
- (void)registerUndoActionWithLabel:(id)a0 uuid:(id)a1 urlString:(id)a2;
- (void)removeAllUndoActions;
- (void)signalWithExtensionID:(id)a0 milestone:(id)a1;

@end
