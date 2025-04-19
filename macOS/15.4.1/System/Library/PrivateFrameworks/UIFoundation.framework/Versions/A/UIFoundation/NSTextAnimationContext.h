@class NSArray, NSTextLayoutManager, NSTextRange;
@protocol NSTextLocation;

@interface NSTextAnimationContext : NSObject {
    id<NSTextLocation> _enclosingLocation;
    id<NSTextLocation> _enclosingEndLocation;
    NSTextRange *_enclosingTextRange;
    NSTextRange *_unionTextRange;
    unsigned long long _snapshotComponents;
    unsigned long long _snapshotExclusiveComponents;
    BOOL _inSnapshot;
}

@property (copy) id /* block */ presentationSizeProvider;
@property (readonly) unsigned long long _effectiveComponents;
@property (readonly) unsigned long long _effectiveExclusiveComponents;
@property (readonly) NSTextRange *_unionTextRange;
@property (readonly, weak) NSTextLayoutManager *textLayoutManager;
@property (readonly) NSArray *textRanges;
@property (readonly) NSTextRange *enclosingTextRange;
@property unsigned long long components;
@property unsigned long long componentsForExclusiveRange;
@property (copy) id /* block */ completionHandler;
@property (copy) id /* block */ snapshotAttributeOverrides;

- (void).cxx_destruct;
- (void)finalizeAnimation;
- (id)initWithTextLayoutManager:(id)a0 textRanges:(id)a1;
- (void)snapshotWithComponents:(unsigned long long)a0 exclusiveComponents:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)_unionTextRange;
- (void)_contentsReplaced;
- (unsigned long long)_effectiveComponents;
- (unsigned long long)_effectiveExclusiveComponents;
- (void)_endAnimationContext:(long long)a0;
- (BOOL)_hasRenderableComponentsForRange:(id)a0;
- (void)_invalidated;
- (void)_overridden;
- (void)_shiftLocationForDelta:(long long)a0;
- (BOOL)_updateEnclosingLocation:(id)a0 endLocation:(id)a1;
- (id)enclosingTextRange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })presentationLayoutFragmentFrameForTextLayoutFragment:(id)a0 proposedOrigin:(struct CGPoint { double x0; double x1; })a1;

@end
