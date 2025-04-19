@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PhotosAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {
    NSObject<OS_dispatch_queue> *_unboostingQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (BOOL)account:(id)a0 willChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (id)_findPhotoLibraryIdentifiersMatchingSearchCriteria:(id)a0 error:(id *)a1;
- (BOOL)_isCloudPhotoAutoEnableForAccount:(id)a0;
- (void)_setPhotoStreamEnabled:(BOOL)a0;
- (void)_setSharedAlbumEnabled:(BOOL)a0;
- (void)_setiCPLEnabled:(BOOL)a0 forBundle:(id)a1;
- (id)libraryBundleForGP;
- (id)libraryBundleForSPL;
- (id)libraryBundleForURL:(id)a0;

@end
