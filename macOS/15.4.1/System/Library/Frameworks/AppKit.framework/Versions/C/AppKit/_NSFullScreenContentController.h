@class _NSFullScreenMenuBarCompanionController, _NSFullScreenStorage, _NSFullScreenSpace, NSWindow;

@interface _NSFullScreenContentController : NSObject {
    _NSFullScreenMenuBarCompanionController *_menuBarController;
    _NSFullScreenStorage *_fullScreenStorage;
    BOOL _performingLiveResize;
    BOOL _performingTileResizeToFit;
    BOOL _hasInvalidTileFrame;
}

@property (readonly, nonatomic) NSWindow *window;
@property (retain, nonatomic) _NSFullScreenSpace *space;
@property (nonatomic) unsigned long long presentationOptions;
@property (nonatomic) BOOL hasAlwaysVisibleMenuBar;
@property (weak, nonatomic) _NSFullScreenContentController *surrogateContentController;
@property (weak, nonatomic) _NSFullScreenContentController *realContentController;
@property (nonatomic) BOOL preventsResigningAsPrincipalWindow;
@property (nonatomic) struct CGSize { double width; double height; } fallbackMinFullScreenContentSize;
@property (readonly) BOOL visibleMenuBarAllowedInFullScreen;
@property (readonly) BOOL allowsCompanionWindowRevealInFullScreen;
@property (readonly) BOOL reservesSpaceForMenuBarInFullScreen;

+ (unsigned long long)_defaultPresentationOptions;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned int)contentWindowID;
- (id)initWithWindow:(id)a0;
- (unsigned int)createFencePort;
- (void)dispose;
- (BOOL)isOnActiveSpace;
- (void)startLiveResize;
- (void)addSiblingWindow:(long long)a0 position:(unsigned long long)a1 responseHandler:(id /* block */)a2;
- (void)alwaysShowsMenuBarDidChange;
- (unsigned int)contentOwnerConnectionID;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentWindowFrame;
- (id)currentDividerResizeDirections;
- (id)cursorForResizeDirection:(long long)a0;
- (BOOL)disableMCExit;
- (void)displayChanged;
- (void)endLiveResize;
- (id)fullScreenStorage;
- (BOOL)isPrincipalInSpace;
- (id)menuBarCompanionController;
- (BOOL)performDividerDragWithEvent:(id)a0 forResizeDirection:(long long)a1;
- (BOOL)performTileResizeToFit:(struct CGSize { double x0; double x1; })a0;
- (BOOL)performTileResizeToFit:(struct CGSize { double x0; double x1; })a0 acceptIncorrectSize:(BOOL)a1;
- (void)queryCanAddSiblingWindow:(long long)a0 responseHandler:(id /* block */)a1;
- (void)reshapeContentForTileContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)resignPrincipalFullScreenWindowInSpace;
- (id)screen;
- (BOOL)setAsThePrincipalFullScreenWindowInSpace;
- (BOOL)sharesTileWithOtherTabs;
- (id)windowIDsForSnapshot;

@end
