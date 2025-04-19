@class NSTouchBarView, NSArray, NSMutableSet, NSTouchBarItem, NSMutableArray;

@interface NSTouchBarViewController : NSViewController {
    NSArray *_touchBars;
    NSMutableSet *_observedBars;
    NSTouchBarView *_touchBarView;
    NSMutableArray *_groupItems;
    NSTouchBarItem *_escapeKeyReplacementItem;
    BOOL _needsUpdateTree;
}

@property (copy) NSArray *touchBars;
@property (readonly) NSTouchBarView *touchBarView;
@property (readonly) NSTouchBarItem *escapeKeyReplacementItem;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)forceUpdateTree;
- (void)_diffTouchBars:(id)a0 againstOldTouchBars:(id)a1 blockForAdding:(id /* block */)a2 blockForRemoving:(id /* block */)a3;
- (id)_expandBars:(id)a0;
- (void)_noteTouchBarsChanged;
- (void)_startObservingTouchBar:(id)a0;
- (void)_stopObservingTouchBar:(id)a0;
- (void)_updateTree;
- (BOOL)_viewControllerSupports10_10Features;
- (void)loadView;
- (void)viewWillLayout;

@end
