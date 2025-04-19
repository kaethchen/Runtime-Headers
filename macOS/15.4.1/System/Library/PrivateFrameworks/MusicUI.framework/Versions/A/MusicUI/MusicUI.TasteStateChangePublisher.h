@interface MusicUI.TasteStateChangePublisher : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ onArtistFavoritesDidChange;
    void /* unknown type, empty encoding */ onContentReloadTrigger;
    void /* unknown type, empty encoding */ musicTasteProvider;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ _musicTasteMap;
}

- (void)tasteStateDatabaseDidLoad:(id)a0;
- (void)tasteStateDidChange:(id)a0;

@end
