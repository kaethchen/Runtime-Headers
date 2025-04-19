@class FBSWorkspace, NSMutableArray, NSMutableDictionary, NSScreen;
@protocol UINSHidManager, UINSApplication, UINSTextInput;

@interface UINSWorkspace : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    FBSWorkspace *_workspace;
    NSMutableArray *_lock_appScenes;
    NSMutableDictionary *_lock_scenesBySceneID;
    NSMutableDictionary *_lock_scenesByPersistentID;
    NSMutableArray *_lock_pendingAppSceneBlocks;
    unsigned char _lock_pendingAppScenes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialScreenFrame;
    unsigned int _initialDisplayID;
}

@property (class, readonly, nonatomic) UINSWorkspace *sharedInstance;

@property (readonly, weak, nonatomic) NSScreen *initialScreen;
@property (readonly, nonatomic) id<UINSApplication> application;
@property (readonly, nonatomic) id<UINSHidManager> hidManager;
@property (readonly, nonatomic) id<UINSTextInput> textInput;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } usableDisplaySizeHint;
@property (readonly, nonatomic) unsigned int initialDisplayID;
@property (readonly, nonatomic) BOOL prefersSmallerDisplaySize;

- (id)init;
- (void).cxx_destruct;
- (BOOL)getValue:(BOOL *)a0 forSafeApertureCompatibilityDefaultsKey:(id)a1;
- (BOOL)getValue:(BOOL *)a0 forSafeApertureCompatibilityURLResourceKey:(id)a1;
- (double)menuBarHeight;
- (id)valueForSafeApertureCompatibilityEnvironmentVariable:(id)a0;
- (void)requestSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)sendActions:(id)a0;
- (struct CGSize { double x0; double x1; })_fullScreenSizeForScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayID:(int)a1;
- (BOOL)_haveMultipleApplicableDisplaySizesForScene:(id)a0;
- (void)_lock_noteSceneDidConnect:(id)a0;
- (BOOL)_mainScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 visibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 displayID:(unsigned int *)a2;
- (struct CGSize { double x0; double x1; })_maximumContentSizeForWindowOnScreen:(id)a0;
- (struct CGSize { double x0; double x1; })_maximumContentSizeForWindowWithVisibleScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_noteSceneDidConnectNotification:(id)a0;
- (void)_noteSceneWillDisconnect:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_nsScreenRectForCGDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withZeroDisplayHeight:(double)a1;
- (void)destroyScenesWithPersistentIdentifiers:(id)a0;
- (id)fbsSceneForSceneIdentifier:(id)a0 error:(out id *)a1;
- (void)getApplicationSceneUsingPreferredOrder:(id)a0 completion:(id /* block */)a1;
- (void)initializeWithWorkspace:(id)a0;

@end
