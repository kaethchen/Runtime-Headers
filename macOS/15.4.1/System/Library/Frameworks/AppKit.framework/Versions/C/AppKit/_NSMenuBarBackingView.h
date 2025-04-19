@class NSArray, NSMutableArray;

@interface _NSMenuBarBackingView : NSView {
    NSMutableArray *_arrangedSubviews;
}

@property (retain, nonatomic) NSArray *arrangedSubviews;

- (void).cxx_destruct;
- (void)_layoutSubtreeWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)addArrangedSubview:(id)a0;
- (id)initWithArrangedSubviews:(id)a0;
- (void)insertArrangedSubview:(id)a0 atIndex:(long long)a1;
- (void)removeAllSubviews;
- (void)removeArrangedSubview:(id)a0;
- (void)removeArrangedSubviewAtIndex:(long long)a0;
- (void)removeLastArrangedSubview;

@end
