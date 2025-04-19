@class NSArray, NSMapTable, NSStackView, NSMutableArray;

@interface NSStackViewContainer : NSView {
    NSMutableArray *_views;
    NSMutableArray *_detachedViews;
    NSMapTable *_customSpaceMapping;
    NSMapTable *_visibilityPriorityMapping;
}

@property (weak) NSStackView *stackView;
@property (copy) NSArray *views;
@property (readonly, copy) NSArray *detachedViews;
@property (readonly, copy) NSArray *attachedViews;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_valueOfCustomSpacingAfterView:(id)a0;
- (void)_setValueOfCustomSpacing:(id)a0 afterView:(id)a1;
- (void)_setValueOfVisibilityPriority:(id)a0 forView:(id)a1;
- (id)_valueOfVisibilityPriorityForView:(id)a0;
- (BOOL)containsView:(id)a0;
- (id)customSpaceMapping;
- (double)customSpacingAfterView:(id)a0;
- (void)detachViews:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithStackView:(id)a0;
- (void)insertView:(id)a0 atIndex:(unsigned long long)a1;
- (void)reattachViews:(id)a0;
- (void)removeView:(id)a0;
- (void)replaceSubview:(id)a0 with:(id)a1;
- (void)replaceView:(id)a0 with:(id)a1;
- (void)setCustomSpacing:(double)a0 afterView:(id)a1;
- (void)setVisibilityPriority:(float)a0 forView:(id)a1;
- (BOOL)shouldBeArchived;
- (float)visibilityPriorityForView:(id)a0;
- (id)visibilityPriorityMapping;

@end
