@class NSDictionary, NSString, CPKEmojiIMPreviewWindow, CPKEmojiIMEmojiListView, CPKEmojiIMCategoryView, CPKEmojiIMViewController, CPKEmojiIMContentCoverView;
@protocol CPKEmojiIMViewControllerDelegate, NSObject;

@interface CPKEmojiIMContentView : NSView <NSPopoverDelegate>

@property CPKEmojiIMViewController *viewController;
@property id<CPKEmojiIMViewControllerDelegate, NSObject> delegate;
@property (retain) CPKEmojiIMPreviewWindow *previewWindow;
@property (copy, nonatomic) id /* block */ getWindowInfoBlock;
@property CPKEmojiIMCategoryView *categoryView;
@property CPKEmojiIMEmojiListView *emojiListView;
@property CPKEmojiIMContentCoverView *coverView;
@property double defaultGapContainerAndList;
@property (retain) NSDictionary *emojiBarState;
@property BOOL shownInCharacterPicker;
@property BOOL secondaryInitializationDone;
@property BOOL needsReset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)reset;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithState:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)viewDidMoveToWindow;
- (void)setSearchResults:(id)a0;
- (void)_requestExpandCollapseCategory:(id)a0;
- (void)_clickedSearchButton:(id)a0;
- (void)_didCharacterSelected:(id)a0;
- (void)_didScrolledToCategory:(id)a0;
- (void)_handleClickOnCoverView:(id)a0;
- (void)_initializeDeferredContents;
- (void)_myClosePopover:(id)a0;
- (void)_needScrollToCategory:(id)a0;
- (void)_openCharacterPickerWindow;
- (void)_pullingOutCategory:(id)a0;
- (void)_requestClose:(id)a0;
- (void)_requestShowHideCloseButton:(id)a0;
- (void)_requestShowHideCover:(id)a0;
- (void)_secondaryInit;
- (void)_showHidePreviewWindow:(id)a0;
- (void)_startFinishCategoryAnimation:(id)a0;
- (void)_willOpenedForSearchingInOtherApp:(id)a0;
- (id)getStateInfo;
- (void)setStateInfo:(id)a0;

@end
