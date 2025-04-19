@class NSWindow, NSMutableArray;
@protocol NSTearOffTabWindowDelegate;

@interface NSTearOffTabWindow : NSWindow {
    NSWindow *_tornFromWindow;
    BOOL _didDetachWindow;
    id _eventMonitor;
    NSMutableArray *_deferredEvents;
}

@property (nonatomic) id<NSTearOffTabWindowDelegate> tabDelegate;

- (void)dealloc;
- (BOOL)_wantsFullScreenTileDropTargets;
- (BOOL)didDetachWindow;
- (BOOL)_allowedInOtherAppsFullScreenSpaceWithCollectionBehavior:(unsigned long long)a0;
- (void)_markAppropriateForAutomaticFullScreenMode:(BOOL)a0;
- (void)_refreshTilingConstraints:(BOOL)a0;
- (void)_setWindowTag;
- (void)beginServerSideWindowDragUsingOffset:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canEnterFullScreenMode;
- (BOOL)detachAndMoveWindowToSpaceIfNecessary;
- (id)detachedWindow;
- (void)enteredMissionControlWithTab;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tornFromWindow:(id)a1;
- (void)mouseUpAfterMissionControl;
- (id)restoreWindowOnDockDeath;
- (BOOL)shouldDisableTabBarDropTargets;

@end
