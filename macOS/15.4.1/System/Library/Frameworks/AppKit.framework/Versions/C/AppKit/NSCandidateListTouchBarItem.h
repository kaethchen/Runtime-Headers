@class NSArray, NSView, NSString, NSViewController, NSCandidateListViewController;
@protocol NSCandidateListTouchBarItemDelegate, NSTextInputClient;

@interface NSCandidateListTouchBarItem : NSTouchBarItem <NSTouchBarItemPositionAnimationDelegate> {
    NSCandidateListViewController *_candidateViewController;
    NSString *_customizationLabel;
    NSViewController *_inputContextViewController;
    struct { unsigned char _allowsIM : 1; unsigned char _collapsed : 1; unsigned char _isTextCompletionItem : 1; unsigned int _reserved : 29; } _clfbiFlags;
}

@property (readonly) NSCandidateListViewController *candidateListViewController;
@property (weak) NSView<NSTextInputClient> *client;
@property (weak) id<NSCandidateListTouchBarItemDelegate> delegate;
@property (getter=isCollapsed) BOOL collapsed;
@property BOOL allowsCollapsing;
@property (readonly, getter=isCandidateListVisible) BOOL candidateListVisible;
@property BOOL allowsTextInputContextCandidates;
@property (copy) id /* block */ attributedStringForCandidate;
@property (readonly, copy) NSArray *candidates;
@property (copy) NSString *customizationLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)candidateBarAppearance;
+ (id)keyPathsForValuesAffectingView;
+ (double)standardWidth;

- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)view;
- (id)client;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setClient:(id)a0;
- (id)_textInputContextViewController;
- (id /* block */)formattingBlock;
- (void)_automaticTextCompletionChanged:(id)a0;
- (void)_commonInit;
- (void)_didChangeCandidateListVisibility;
- (void)_setTextInputContextViewController:(id)a0;
- (BOOL)allowsCollapsing;
- (BOOL)allowsTextInputContextCandidates;
- (id)candidates;
- (id)customizationLabel;
- (unsigned long long)itemPosition;
- (BOOL)limitsNumberOfCandidates;
- (void)runPositionAnimation;
- (void)setAllowsCollapsing:(BOOL)a0;
- (void)setAllowsTextInputContextCandidates:(BOOL)a0;
- (void)setCandidates:(id)a0 forSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inString:(id)a2;
- (void)setCandidates:(id)a0 forSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inString:(id)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 view:(id)a4 completionHandler:(id /* block */)a5;
- (void)setCandidates:(id)a0 forSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(unsigned long long)a2 inString:(id)a3 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 view:(id)a5 completionHandler:(id /* block */)a6;
- (void)setCollapsed:(BOOL)a0;
- (void)setCustomizationLabel:(id)a0;
- (void)setFormattingBlock:(id /* block */)a0;
- (void)setLimitsNumberOfCandidates:(BOOL)a0;
- (BOOL)shouldAnimateNextLayoutPass;
- (void)updateWithInsertionPointVisibility:(BOOL)a0;
- (id)viewController;

@end
