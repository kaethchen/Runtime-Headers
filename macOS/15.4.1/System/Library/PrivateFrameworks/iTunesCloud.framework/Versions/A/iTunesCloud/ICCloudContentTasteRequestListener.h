@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ICCloudContentTasteRequestListener : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedCloudContentTasteRequestListener;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)setContentTaste:(long long)a0 forAlbumStoreID:(long long)a1 persistentID:(long long)a2 timeStamp:(id)a3 configuration:(id)a4 withCompletionHandler:(id /* block */)a5;
- (void)setContentTaste:(long long)a0 forArtistStoreID:(long long)a1 persistentID:(long long)a2 timeStamp:(id)a3 configuration:(id)a4 withCompletionHandler:(id /* block */)a5;
- (void)setContentTaste:(long long)a0 forMediaItem:(long long)a1 storeIdentifier:(long long)a2 configuration:(id)a3 timeStamp:(id)a4 withCompletionHandler:(id /* block */)a5;
- (void)setContentTaste:(long long)a0 forMediaItem:(long long)a1 storeIdentifier:(long long)a2 persistentID:(long long)a3 timeStamp:(id)a4 configuration:(id)a5 withCompletionHandler:(id /* block */)a6;
- (void)setContentTaste:(long long)a0 forPlaylistGlobalID:(id)a1 persistentID:(long long)a2 timeStamp:(id)a3 configuration:(id)a4 withCompletionHandler:(id /* block */)a5;
- (void)_setupContentTasteServiceConnection;
- (void)setContentTaste:(long long)a0 forAlbumStoreID:(long long)a1 configuration:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)setContentTaste:(long long)a0 forAlbumStoreID:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)setContentTaste:(long long)a0 forArtistStoreID:(long long)a1 configuration:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)setContentTaste:(long long)a0 forArtistStoreID:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)setContentTaste:(long long)a0 forMediaItem:(long long)a1 storeIdentifier:(long long)a2 timeStamp:(id)a3 withCompletionHandler:(id /* block */)a4;
- (void)setContentTaste:(long long)a0 forPlaylistGlobalID:(id)a1 configuration:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)setContentTaste:(long long)a0 forPlaylistGlobalID:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(BOOL)a0 configuration:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(BOOL)a0 withCompletionHandler:(id /* block */)a1;

@end
