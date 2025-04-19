@class NSUUID, NSString, _WTTextEffectView, _WTTextPreview, _WTSweepTextEffect, NSMutableArray, _WTReplaceTextEffect, NSTextPlaceholder;

@interface _WTTextPlaceholderController : NSObject <_WTTextPreviewAsyncSource> {
    id _delegate;
    NSTextPlaceholder *_placeholder;
    _WTTextEffectView *_effectView;
    _WTSweepTextEffect *_ponderingEffect;
    _WTReplaceTextEffect *_replaceTextEffect;
    NSMutableArray *_completionHandlers;
    NSUUID *_ponderingEffectUUID;
    NSUUID *_replaceEffectUUID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _completionLock;
    _WTTextPreview *_textPreview;
}

@property (nonatomic) long long pattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_delegateImplementsInsertionMethods:(id)a0;
+ (BOOL)_delegateImplementsRemovalMethods:(id)a0;
+ (id)placeholderControllerForDelegate:(id)a0;
+ (void)removePlaceholderControllerForDelegate:(id)a0;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)textPreviewForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(id /* block */)a1;
- (void)textPreviewsForChunk:(id)a0 completion:(id /* block */)a1;
- (void)updateIsTextVisible:(BOOL)a0 forChunk:(id)a1 completion:(id /* block */)a2;
- (void)_insertPlaceholderAndBeginShimmerWithCaretRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 placeholderSize:(struct CGSize { double x0; double x1; })a1;
- (void)_beginShowingShimmerHighlightsWithCaretRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_endShowingShimmerHighlightsWithCompletion:(id /* block */)a0;
- (id)_visualRectsForRects:(id)a0 containerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 caretRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)_widthRatioForIteration:(int)a0 isFinal:(BOOL)a1;
- (void)beginPlaceholder;
- (void)endPlaceholderAndWillInsertText:(BOOL)a0 completion:(id /* block */)a1;

@end
