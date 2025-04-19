@class CLSCurrentUser;

@interface CLSSettingsVisibilityController : NSObject {
    CLSCurrentUser *_currentUser;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)shared;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)lock;
- (void)unlock;
- (id)currentUser;
- (id)cachedCurrentUserAppleID;
- (void)currentUserDidChange:(id)a0;
- (BOOL)settingsUIVisible;

@end
