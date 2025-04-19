@class NSView, NSBox;

@interface FI_TPopoverContentSubview : FI_TUpdateLayerView {
    NSView *_view;
    NSBox *_separator;
}

- (void).cxx_destruct;
- (id)view;
- (id)initWithView:(id)a0;
- (void)removeSeparator;
- (void)addSeparator;

@end
