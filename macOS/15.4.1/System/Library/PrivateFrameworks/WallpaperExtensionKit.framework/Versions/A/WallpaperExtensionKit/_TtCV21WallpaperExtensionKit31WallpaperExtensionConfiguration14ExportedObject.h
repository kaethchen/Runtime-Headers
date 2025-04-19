@interface _TtCV21WallpaperExtensionKit31WallpaperExtensionConfiguration14ExportedObject : NSObject <WallpaperExtensionKit.WallpaperExtensionXPCProtocol> {
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ xpcConnection;
}

- (id)init;
- (void).cxx_destruct;
- (void)acquireWithId:(id)a0 request:(id)a1 reply:(id /* block */)a2;
- (void)handleNotificationWithNamed:(id)a0;
- (void)invalidateWithId:(id)a0;
- (void)snapshotWithId:(id)a0 reply:(id /* block */)a1;
- (void)updateWithId:(id)a0 request:(id)a1;

@end
