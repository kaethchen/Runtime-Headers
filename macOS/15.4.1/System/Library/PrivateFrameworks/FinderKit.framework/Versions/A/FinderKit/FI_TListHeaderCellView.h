@class FI_TKeyValueObserverGlue, FI_TUpdateLayerView, NSArray, NSIndexSet, FI_TImageView, NSObject;

@interface FI_TListHeaderCellView : NSTableCellView {
    FI_TImageView *_tagImageView;
    FI_TImageView *_titleImageView;
    FI_TUpdateLayerView *_rightSeparatorView;
    FI_TUpdateLayerView *_leftSeparatorView;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _textFieldStringValueObserver;
}

@property (nonatomic) double rightTextMargin;
@property (nonatomic) double leftTextMargin;
@property (nonatomic, getter=isSeparatorHidden) BOOL separatorHidden;
@property (nonatomic, getter=isSortTriangleHidden) BOOL sortTriangleHidden;
@property (nonatomic, getter=isSortAscending) BOOL sortAscending;
@property (nonatomic, getter=isDragging) BOOL dragging;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (nonatomic, getter=isNextCellViewPressed) BOOL nextCellViewPressed;
@property (nonatomic, getter=isInFloatingHeader) BOOL inFloatingHeader;
@property (nonatomic) struct CGSize { double width; double height; } titlePreferredSize;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)setTitleImage:(id)a0;
- (void)cloneFrom:(id)a0;
- (BOOL)hitTestInSeparator:(const struct CGPoint { double x0; double x1; } *)a0 evenIfHidden:(BOOL)a1;
- (void)setTagImage:(id)a0;
- (id)sortTriangleView;

@end
