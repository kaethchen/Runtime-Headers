@class NSMapTable, NSArray, NSTextRange, NSTextContainer, NSTextLayoutManager, NSMutableArray;
@protocol NSTextViewportLayoutControllerDelegate, NSTextViewportLayoutDelegate_Private, NSTextViewportElementProvider;

@interface NSTextViewportLayoutController : NSObject {
    NSTextContainer *_textContainer;
    id<NSTextViewportLayoutDelegate_Private> _delegate;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _viewportBounds;
    struct CGPoint { double x; double y; } _viewportOffset;
    NSTextRange *_viewportRange;
    NSMapTable *_renderingSurfaces;
    NSArray *_viewportElements;
    NSMutableArray *_viewportLayoutObservers;
    struct { unsigned char _layoutIsValid : 1; unsigned char _needsLayout : 1; unsigned char _shouldReset : 1; unsigned char _updatingRenderingSurfaces : 1; unsigned char _isTextLayoutManager : 1; unsigned char _delegateConformsToPublicAPI : 1; unsigned char _delegateSupportsLocationPositionMapping : 1; unsigned char _delegateSupportsRenderingSurfaces : 1; unsigned char _delegateSupportsAuxiliaryRenderingSurfaces : 1; unsigned char _delegateSupportsPresentationLayoutFragment : 1; unsigned char _needsLayoutSelectorType : 2; } _viewportLayoutControllerFlags;
}

@property (class, readonly) BOOL flushesCachedViewportElements;

@property (readonly, weak) id<NSTextViewportElementProvider> elementProvider;
@property (copy) id /* block */ _platformRenderingSurfaceUpdater;
@property (weak) id<NSTextViewportLayoutControllerDelegate> delegate;
@property (readonly, weak) NSTextLayoutManager *textLayoutManager;
@property (readonly, weak) NSTextContainer *textContainer;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } viewportBounds;
@property (readonly) NSTextRange *viewportRange;
@property (copy) id /* block */ renderingSurfaceUpdater;

+ (BOOL)flushesCachedViewportElements;

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewport;
- (BOOL)addRenderingSurface:(id)a0 key:(id)a1 group:(long long)a2 placement:(long long)a3;
- (void)adjustViewport:(double)a0 atLocation:(id)a1 verticalOffsetFromLocation:(double)a2;
- (void)enumerateViewportElementsFromLocation:(id)a0 options:(long long)a1 usingBlock:(id /* block */)a2;
- (void)layoutViewport;
- (id)renderingSurfaceForKey:(id)a0;
- (void)setNeedsLayout;
- (id)textContainer;
- (id)textViewportElementAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewportBounds;
- (id)textViewportElementForLocation:(id)a0;
- (void)adjustViewportByVerticalOffset:(double)a0;
- (double)relocateViewportToTextLocation:(id)a0;
- (void)_resetLayout;
- (void)addViewportLayoutObserver:(id)a0;
- (void)enumerateTextViewportElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(long long)a1 usingBlock:(id /* block */)a2;
- (id)initWithElementProvider:(id)a0;
- (id)initWithTextContainer:(id)a0;
- (id)initWithTextLayoutManager:(id)a0;
- (id)locationAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)removeViewportLayoutObserver:(id)a0;
- (void)setRenderingSurface:(id)a0 forKey:(id)a1;
- (id)textViewportElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
