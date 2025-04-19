@class NSTimer, NSArray, NSView, NSViewController, NSTouchBarItem, NSButton, NSLayoutConstraint;
@protocol NSTextInputClient;

@interface NSCandidateListViewController : NSViewController {
    NSButton *_button;
    NSLayoutConstraint *_minWidthConstraint;
    NSLayoutConstraint *_maxWidthConstraint;
    id _leftCandidate;
    id _middleCandidate;
    id _rightCandidate;
    NSArray *_splitRightArray;
    struct CGPoint { double x; double y; } _location;
    NSTouchBarItem *_touchBarItem;
    id _delegate;
    NSView<NSTextInputClient> *_client;
    NSView *_viewForLocation;
    NSViewController *_accessoryViewController;
    id /* block */ _formattingBlock;
    id /* block */ _completionHandler;
    unsigned long long _trackingIndex;
    long long _sequenceNumber;
    double _lastUpdateTime;
    double _pendingTransitionDuration;
    NSTimer *_updateTimer;
    unsigned long long _delayedCollapseCount;
    struct { unsigned char _shouldUsePanel : 1; unsigned char _isTracking : 1; unsigned char _hasCorrection : 1; unsigned char _hasQuotes : 1; unsigned char _collapsed : 1; unsigned char _allowsCollapsing : 1; unsigned char _allowsCandidateVariation : 1; unsigned char _processingUserCollapse : 1; unsigned char _processingCollapse : 1; unsigned char _hasEmoji : 1; unsigned char _limitsNumberOfCandidates : 1; unsigned int _reserved : 21; } _flags;
}

@property (class, readonly) double standardWidth;

@property (copy) id leftCandidate;
@property (copy) id middleCandidate;
@property (copy) id rightCandidate;
@property (weak) NSTouchBarItem *touchBarItem;
@property (weak) NSView<NSTextInputClient> *client;
@property (weak) id delegate;
@property (copy) id /* block */ formattingBlock;
@property (copy) id /* block */ completionHandler;
@property (readonly, copy) NSArray *candidates;
@property (getter=isCollapsed) BOOL collapsed;
@property BOOL allowsCollapsing;
@property (retain) NSViewController *accessoryViewController;
@property (readonly) BOOL shouldAnimateNextLayoutPass;
@property (readonly) BOOL processingUserExpand;
@property BOOL limitsNumberOfCandidates;

+ (id)sharedPanel:(BOOL)a0;

- (void)dealloc;
- (id)init;
- (id)_compositeCandidateForCandidate:(id)a0 atIndex:(unsigned long long)a1 addQuotes:(BOOL)a2 isCorrection:(BOOL)a3 isEmoji:(BOOL)a4;
- (void)_delayedSetCollapsed;
- (BOOL)_prepareDelayedSetCollapsed;
- (id)_replacementStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 firstCandidateString:(id)a2;
- (void)_setCollapsed:(BOOL)a0;
- (void)_setNonTextCheckingResultCandidates:(id)a0;
- (void)_setTextCheckingResultCandidates:(id)a0 forSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(unsigned long long)a2 inString:(id)a3 replacedString:(id)a4;
- (id)_stringForCandidate:(id)a0 atIndex:(unsigned long long)a1;
- (void)_updateCollapsingStateConstraint;
- (BOOL)_viewControllerSupports10_10Features;
- (id)candidateForTrackingIndex:(unsigned long long)a0 candidateIndex:(unsigned long long *)a1;
- (void)continueTrackingInSegmentType:(long long)a0 index:(unsigned long long)a1;
- (void)loadView;
- (void)runPositionAnimation;
- (void)setCandidates:(id)a0 forSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inString:(id)a2;
- (void)setCandidates:(id)a0 forSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inString:(id)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 view:(id)a4 completionHandler:(id /* block */)a5;
- (void)setCandidates:(id)a0 forSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inString:(id)a2 replacedString:(id)a3 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 view:(id)a5 completionHandler:(id /* block */)a6;
- (void)setCandidates:(id)a0 forSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(unsigned long long)a2 inString:(id)a3 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 view:(id)a5 completionHandler:(id /* block */)a6;
- (void)setCandidates:(id)a0 forSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(unsigned long long)a2 inString:(id)a3 replacedString:(id)a4 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 view:(id)a6 completionHandler:(id /* block */)a7;
- (void)setPropertiesOnRemoteViewController:(BOOL)a0;
- (void)showCandidates:(id)a0 forString:(id)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 view:(id)a3 completionHandler:(id /* block */)a4;
- (void)showPanel;
- (void)spellCheckerDidChangeCompletionCollapsed:(id)a0;
- (void)startTrackingInSegmentType:(long long)a0 index:(unsigned long long)a1;
- (void)stopTrackingInSegmentType:(long long)a0 index:(unsigned long long)a1;
- (void)updateState;
- (void)updateStateAndTitles:(BOOL)a0 allowDelay:(BOOL)a1;
- (void)updateTimerFired:(id)a0;
- (void)updateTitles;
- (void)updateViewConstraints;
- (void)userSetCollapsed:(BOOL)a0;

@end
