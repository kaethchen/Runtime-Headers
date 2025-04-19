@class CNContactStore, CNContact, NSImage, ACAccount;

@interface AOSUIProfilePictureStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _profilePictureLock;
    CNContactStore *_contactStore;
    ACAccount *_account;
    NSImage *_cachedImage;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedImageCropRect;
    NSImage *_croppedImage;
    CNContact *_cachedContact;
}

@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSImage *editorPicture;
@property (readonly, copy, nonatomic) NSImage *profilePicture;
@property (readonly, copy, nonatomic) NSImage *profilePictureDefaultDiameter;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageCropRect;

+ (double)screenScale;
+ (id)profilePictureForContact:(id)a0 serverImageData:(id)a1 firstName:(id)a2 lastName:(id)a3 diameter:(double)a4;
+ (id)sharedProfilePictureStoreForAccount:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)_contactStore;
- (id)_meCard;
- (id)_cachedProfilePictureFromDisk;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cachedProfilePictureRect;
- (id)_cardMatchingEmail:(id)a0;
- (id)_contactKeysToFetch;
- (id)_imageForContact:(id)a0;
- (void)_initLoadImageForAccount;
- (void)_loadImageForAccount;
- (void)_loadImageForAccountFromServerWithCompletion:(id /* block */)a0;
- (void)_meCardDidChange:(id)a0;
- (void)_postAccountPictureChangedNotification;
- (id)_profilePictureLocalCacheURL;
- (void)_removeCachedAppleAccountIcon;
- (void)_saveProfilePictureToCache:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setProfilePicture:(id)a0 withCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andCroppedImage:(id)a2;
- (void)setProfilePicture:(id)a0 withCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andCroppedImage:(id)a2 andContact:(id)a3;
- (void)setProfilePictureWithContact:(id)a0;

@end
