@class NSView, NSString;

@interface NSDockTile : NSObject {
    id _owner;
    void *_dockContextRef;
    NSView *_contentView;
    NSView *_frameView;
    NSView *_backstopView;
    NSString *_badgeLabel;
    struct { unsigned char showsAppBadge : 1; unsigned int reserved : 31; } _dFlags;
    struct CGSize { double width; double height; } _dockTileSize;
    id _miniViewController;
}

@property (retain) NSView *miniView;
@property (readonly) struct CGSize { double x0; double x1; } size;
@property (retain) NSView *contentView;
@property BOOL showsApplicationBadge;
@property (copy) NSString *badgeLabel;
@property (readonly, weak) id owner;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithOwner:(id)a0;
- (void)display;
- (void)invalidateOwner;
- (id)_backstopView;
- (void)_createFrameViewIfNeeded;
- (void)_dockIsAlive:(BOOL)a0;
- (void)_dockTileScaleFactorChanged:(id)a0;
- (BOOL)_getDockContext:(struct CGContext **)a0 andSize:(struct CGSize { double x0; double x1; } *)a1;
- (struct CGSize { double x0; double x1; })_getSizeFromDock;
- (BOOL)_hasCustomContent;
- (void)_miniViewResized;
- (void)_reenableAppNap:(id)a0;
- (void)_registerForDockScaleChangeNotification;
- (BOOL)_releaseContextIfEmpty;
- (void)_releaseDockContext;
- (void)_setMiniView:(long long)a0 contextid:(unsigned int)a1;
- (void)_setMiniViewShown:(BOOL)a0;
- (void)_setMiniViewWindowLevel:(long long)a0;
- (void)_temporarilyDisableAppNap;
- (id)_tileImage;
- (void)_unregisterForDockScaleChangeNotification;
- (void)_updateDockWindowIDAndDisplayIfNeeded:(BOOL)a0;
- (void)frameChanged:(id)a0;
- (id)miniView;
- (void)setMiniView:(id)a0;

@end
