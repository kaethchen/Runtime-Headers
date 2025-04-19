@class FI_TKeyValueObserverGlue, NSString, NSArray, FI_TTagSuggestionsWindowController, FI_TTaggingSuggestionsViewController, FI_TRunAfterHelper, NSSet, NSObject, FI_TNotificationCenterObserverGlue, FI_TTouchBar, NSIndexSet, FI_TCustomTouchBarItem;

@interface FI_TTaggingTokenField : NSTokenField <TTouchBarTagsViewTagProviding, NSTouchBarDelegate, TMarkTornDown> {
    FI_TTaggingSuggestionsViewController *_suggestionsViewController;
    FI_TTagSuggestionsWindowController *_suggestionsWindowController;
    BOOL _becomingFirstResponder;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _nonEmptyTagsAddTagText;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _showSuggestionsWindowToken;
    BOOL _isFirstResponder;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _tfWindowFirstResponderObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _tfWindowDidBecomeKeyObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _tfWindowDidResignKeyObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _sWindowDidHideObserver;
    struct TNSWeakPtr<FI_TTouchBar> { FI_TTouchBar *fWeakObject; } _editTagsTouchBar;
    struct TNSWeakPtr<FI_TCustomTouchBarItem> { FI_TCustomTouchBarItem *fWeakObject; } _touchBarAddTagsToolBarItem;
    NSSet *_touchBarTagTokens;
    struct vector<CGSize, std::allocator<CGSize>> { struct CGSize *__begin_; struct CGSize *__end_; struct __compressed_pair<CGSize *, std::allocator<CGSize>> { struct CGSize *__value_; } __end_cap_; } _lastFourIntrinsicContentSizes;
}

@property (retain, nonatomic) NSArray *tagAttributes;
@property (nonatomic) BOOL autoResizesVertically;
@property (nonatomic) BOOL showSuggestionsTableInMenu;
@property (nonatomic) BOOL ignoreTextChanged;
@property (nonatomic) BOOL inhibitSuggestions;
@property (readonly, nonatomic) BOOL wasCancelled;
@property (nonatomic) unsigned long long completionLength;
@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (nonatomic, getter=isInPopover) BOOL inPopover;
@property (nonatomic) BOOL showsAddTagPlaceholder;
@property (readonly, nonatomic) FI_TTaggingSuggestionsViewController *suggestionsViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isTornDown) BOOL tornDown;

+ (Class)cellClass;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)textView:(id)a0 menu:(id)a1 forEvent:(id)a2 atIndex:(unsigned long long)a3;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (void)awakeFromNib;
- (BOOL)becomeFirstResponder;
- (void)doCommandBySelector:(SEL)a0;
- (double)firstBaselineOffsetFromTop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)makeTouchBar;
- (void)selectText:(id)a0;
- (void)setBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)textDidChange:(id)a0;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)aboutToTearDown;
- (void)initCommon;
- (void)firstResponderChanged:(id)a0;
- (void)_becomeFirstResponder;
- (void)_resignFirstResponder;
- (void)moveToEndOfText;
- (id)accessibilityChildrenAttributeValue;
- (void)addLastTagPlaceholder;
- (void)awakeCommon;
- (void)closeSuggestionsWindow;
- (BOOL)hasLastTagPlaceholder;
- (double)heightForRows:(double)a0;
- (void)hideSuggestionsWindowWithCommit:(BOOL)a0;
- (void)postGenerateCompletionsNotification:(id)a0;
- (void)postSuggestionsWillShowNotification;
- (void)removeLastTagPlaceholder;
- (void)resizeVertically;
- (void)showSuggestionsWindow;
- (void)showSuggestionsWindowIfNeeded;
- (void)suggestionsListDidChange;
- (void)suggestionsWindowDidHideNotification:(id)a0;
- (BOOL)suggestionsWindowIsVisible;
- (id)tagsAsAttributes;
- (void)tokenFieldWindowBecameKey;
- (void)tokenFieldWindowResignedKey;
- (id)tokenizedTagsAsAttributes;
- (id)touchBarAddTagsViewController;

@end
