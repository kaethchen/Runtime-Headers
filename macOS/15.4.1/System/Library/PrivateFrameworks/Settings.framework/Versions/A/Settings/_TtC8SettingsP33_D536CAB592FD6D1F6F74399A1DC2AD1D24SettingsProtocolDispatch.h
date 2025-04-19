@protocol _TtP8Settings20SettingsHostProtocol_;

@interface _TtC8SettingsP33_D536CAB592FD6D1F6F74399A1DC2AD1D24SettingsProtocolDispatch : _TtCs12_SwiftObject <Settings.SettingsPrivateProtocol> {
    void /* unknown type, empty encoding */ target;
    void /* unknown type, empty encoding */ settingsUndoManager;
    void /* unknown type, empty encoding */ initialPathToken;
    void /* unknown type, empty encoding */ navigationProxy;
    void /* unknown type, empty encoding */ hasPushedContent;
}

@property (nonatomic, retain) id<_TtP8Settings20SettingsHostProtocol_> settingsHost;

- (void)popNavigationStack;
- (void)setCloudSyncEnabled:(BOOL)a0;
- (void)isCloudSyncEnabled:(id /* block */)a0;
- (void)didUnselect;
- (void)willSelect;
- (void)revealElementForKey:(id)a0;
- (void)willSelectWithRevealElementKey:(id)a0;
- (void)handleOpenParameterWithAeDesc:(id)a0;
- (void)openDocumentWithUrl:(id)a0;
- (void)setNavigationWithPath:(id)a0;
- (void)undoLast;
- (void)willSelectWithNavigationPath:(id)a0;
- (void)handshakeWithEndPoint:(id)a0;

@end
