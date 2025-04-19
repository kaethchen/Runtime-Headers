@class NSString, NSView, NSMenuIdenticalVisibleIndexDictionary, NSObject;
@protocol NSMenuVisibleIndexDictionary, NSMenuRepresentationDelegate;

@interface NSHorizontalMenuRepresentation : NSStackView <NSMenuRepresentable> {
    NSMenuIdenticalVisibleIndexDictionary *_indexes;
}

@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (readonly) long long numberOfVisibleItems;
@property (readonly) NSView *backingView;
@property (readonly) NSObject<NSMenuVisibleIndexDictionary> *indexes;
@property (weak, nonatomic) NSObject<NSMenuRepresentationDelegate> *representationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)forEachMenuItemViewAtIndex:(long long)a0 performBlock:(id /* block */)a1;
- (void)forEachVisibleSubview:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForViewAtMenuIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForViewAtVisibleIndex:(long long)a0;
- (void)insertArrangedSubviewAtMenuIndex:(long long)a0 forItem:(id)a1;
- (void)reloadData;
- (void)removeArrangedSubviewAtMenuIndex:(long long)a0;
- (void)setHidden:(BOOL)a0 forMenuItemAtIndex:(long long)a1;
- (id)subviewAtMenuIndex:(long long)a0;
- (id)subviewAtMenuIndex:(long long)a0 creatingIfNeeded:(BOOL)a1;
- (void)updateSizeForItemAtVisibleIndex:(long long)a0;
- (id)viewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (long long)visibleIndexForMenuIndex:(long long)a0;

@end
