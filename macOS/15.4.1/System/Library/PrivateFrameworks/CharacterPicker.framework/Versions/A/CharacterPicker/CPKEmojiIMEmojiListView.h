@class EMIMDFREmojiCategoryListDocumentView, NSLayoutConstraint;

@interface CPKEmojiIMEmojiListView : NSScrollView

@property (retain) EMIMDFREmojiCategoryListDocumentView *savedCategoryDocument;
@property double normalLeadingConstant;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pinningStartVisibleRect;
@property BOOL settingInitialState;
@property double categoryPullOutBasePos;
@property double categoryPullOutCurrentPos;
@property BOOL categoryPullOutOverRun;
@property BOOL categoryPullingOut;
@property NSLayoutConstraint *listLeadingConstraint;
@property BOOL categoryExpanded;
@property BOOL dontPinningContent;
@property BOOL adjustedLeadingForEdgeShadow;
@property double categoryPullOutLimitWidth;

- (void)dealloc;
- (void)reset;
- (void)refresh;
- (void)setSearchResults:(id)a0;
- (void)adjustListAvoidEdgeShadow:(BOOL)a0 adjustContent:(BOOL)a1;
- (void)closeSkinToneSelector;
- (id)getStateInfo;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 previewWindow:(id)a2;
- (void)scrollToCategory:(long long)a0;
- (void)setStateInfo:(id)a0;
- (void)startOrFinishContentPinning:(BOOL)a0;

@end
