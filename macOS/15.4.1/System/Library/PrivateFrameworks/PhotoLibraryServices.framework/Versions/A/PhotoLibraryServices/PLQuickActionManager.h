@class NSData, PLDatabaseContext;

@interface PLQuickActionManager : NSObject <PLCameraPreviewWellImageChangeObserver> {
    PLDatabaseContext *_databaseContext;
}

@property (class, nonatomic) BOOL shouldShowInternalQuickActions;

@property (retain, nonatomic, setter=_setCachedMostRecentPhotoData:) NSData *_cachedMostRecentPhotoData;
@property (nonatomic, setter=_setMostRecentPhotoIsInvalid:) BOOL _mostRecentPhotoIsInvalid;
@property (retain, nonatomic, setter=_setSBSApplicationShortcutServiceClass:) Class _SBSApplicationShortcutServiceClass;
@property (retain, nonatomic, setter=_setSBSApplicationShortcutItemClass:) Class _SBSApplicationShortcutItemClass;
@property (retain, nonatomic, setter=_setSBSApplicationShortcutCustomImageIconClass:) Class _SBSApplicationShortcutCustomImageIconClass;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_userHasPhotos;
- (BOOL)_userHasPhotosFromLastYear;
- (void)buildQuickActionItems;
- (void)cameraPreviewWellImageDidChange:(id)a0;
- (id)initWithDatabaseContext:(id)a0;

@end
