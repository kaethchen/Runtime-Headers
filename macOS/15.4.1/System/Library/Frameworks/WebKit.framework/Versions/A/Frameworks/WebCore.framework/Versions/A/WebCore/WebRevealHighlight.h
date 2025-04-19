@class NSString;

@interface WebRevealHighlight : NSObject <RVPresenterHighlightDelegate> {
    struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> { void *__value_; } __ptr_; } m_callableWrapper; } _clearTextIndicator;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } highlightRect;
@property (readonly, nonatomic) BOOL useDefaultHighlight;
@property (readonly, nonatomic) struct RetainPtr<NSAttributedString> { void *m_ptr; } attributedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)revealContext:(id)a0 drawRectsForItem:(id)a1;
- (id)revealContext:(id)a0 rectsForItem:(id)a1;
- (BOOL)revealContext:(id)a0 shouldUseDefaultHighlightForItem:(id)a1;
- (void)revealContext:(id)a0 stopHighlightingItem:(id)a1;
- (id)initWithHighlightRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 useDefaultHighlight:(BOOL)a1 attributedString:(id)a2 clearTextIndicatorCallback:(void *)a3;

@end
