@interface VideosUI.JSNativeStorage : VUIJSObject <VideosUI.JSPNativeStorageInterface>

- (id)init;
- (id)initWithAppContext:(id)a0;
- (void)readData:(id)a0 :(id)a1;
- (void)storeData:(id)a0 :(id)a1 :(id)a2;

@end
