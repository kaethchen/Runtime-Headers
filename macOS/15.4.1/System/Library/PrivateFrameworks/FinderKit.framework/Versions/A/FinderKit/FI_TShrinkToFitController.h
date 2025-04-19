@class NSObject, NSFont, FI_TRenameOperation, NSString, NSTimer, FI_TShrinkToFitTextView, NSWindow;
@protocol TShrinkToFitDelegateProtocol;

@interface FI_TShrinkToFitController : NSObject <NSWindowDelegate> {
    NSTimer *_delayTimer;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _initialText;
    struct _NSRange { unsigned long long location; unsigned long long length; } _selectionRange;
    long long _maxNumLines;
    BOOL _textGrowsUpwards;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _configuredNode;
    struct TNSWeakPtr<NSObject<TShrinkToFitDelegateProtocol>> { NSObject<TShrinkToFitDelegateProtocol> *fWeakObject; } _weakDelegate;
}

@property (readonly, nonatomic) double srcGlobalBaseline;
@property (readonly, nonatomic) FI_TShrinkToFitTextView *stfTextView;
@property (readonly, nonatomic) NSWindow *parentWindow;
@property (readonly, nonatomic) FI_TRenameOperation *renameOp;
@property (weak, nonatomic) NSObject<TShrinkToFitDelegateProtocol> *delegate;
@property (retain, nonatomic) NSFont *font;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maxGlobalFrame;
@property (readonly, nonatomic) double globalFirstLineBaseline;
@property (nonatomic) unsigned long long maxUniChars;
@property (nonatomic) long long alignment;
@property (nonatomic) BOOL textGrowsUpwards;
@property (nonatomic) long long baseWritingDirection;
@property (readonly, nonatomic) BOOL isEditing;
@property (nonatomic) long long maxNumLines;
@property (nonatomic) BOOL disableDeepClickLookUp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })globalFrame;
- (void)windowDidResignKey:(id)a0;
- (void)startEditing:(BOOL)a0;
- (void)shrinkToFitTextViewAboutToClose;
- (void)configureForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (int)editingSelectionType;
- (id)initWithParentWindow:(id)a0 renameOp:(id)a1 delegate:(id)a2;
- (BOOL)isVisibleInView:(id)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })nodeForEditing;
- (void)setMaxGlobalFrame:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 andGlobalBaseline:(double)a1;
- (void)setText:(id)a0 selectionRange:(const struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)shrinkToFitTextViewAboutToOpen;
- (void)shrinkToFitTextViewEditingComplete:(id)a0;
- (void)startEditingViaDelayTimer;
- (void)stopEditing:(BOOL)a0;

@end
