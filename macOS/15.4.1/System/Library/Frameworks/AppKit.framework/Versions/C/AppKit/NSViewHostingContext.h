@class NSViewHostingTraits, NSView, NSResponder, NSViewHostingContextRootView;

@interface NSViewHostingContext : NSResponder {
    NSViewHostingContextRootView *_rootView;
    struct CGSize { double width; double height; } _containerSize;
}

@property (readonly) NSView *contentView;
@property (readonly) NSView *rootView;
@property (copy) NSViewHostingTraits *hostingTraits;
@property (readonly) NSResponder *firstResponder;
@property (readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (readonly, getter=isInKeyWindow) BOOL inKeyWindow;

+ (id)allContexts;

- (void)dealloc;
- (id)debugDescription;
- (BOOL)handleEvent:(id)a0;
- (id)initWithContentView:(id)a0 traits:(id)a1;
- (BOOL)makeFirstResponder:(id)a0;
- (id)recursiveDescription;
- (void)sendEvents:(id)a0;
- (void)setNeedsUpdate;
- (void)update;

@end
