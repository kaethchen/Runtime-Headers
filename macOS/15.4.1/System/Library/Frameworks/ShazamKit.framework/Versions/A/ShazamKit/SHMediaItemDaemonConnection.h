@interface SHMediaItemDaemonConnection : NSObject

+ (id)serverConnection;
+ (void)fetchHapticsWithMediaItems:(id)a0 completionHandler:(id /* block */)a1;
+ (void)fetchMediaItemWithShazamID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)fetchMediaItemsWithShazamIDs:(id)a0 completionHandler:(id /* block */)a1;
+ (void)isHapticTrackAvailableForMediaItem:(id)a0 completionHandler:(id /* block */)a1;

@end
