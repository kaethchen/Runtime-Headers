@class NSArray, ABContactPickerDelegateWrapper, CNContactPicker;
@protocol ABPersonPickerDelegate;

@interface ABPersonPicker : NSObject {
    CNContactPicker *_picker;
    ABContactPickerDelegateWrapper *_delegateWrapper;
}

@property (copy) NSArray *properties;
@property id<ABPersonPickerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)showRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 preferredEdge:(unsigned long long)a2;

@end
