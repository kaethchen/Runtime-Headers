@class NSStackView, NSMutableSet;

@interface AMWhoseListView : NSView {
    struct { unsigned char isDeallocating : 1; unsigned char ignoreSubviewAdditionAndRemoval : 1; unsigned int RESERVED : 29; } _vlvFlags;
}

@property (retain) NSStackView *stackView;
@property (retain) NSMutableSet *_expandedSubviews;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)addSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willRemoveSubview:(id)a0;
- (void)insertSubview:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)indexOfSubview:(id)a0;
- (void)_configureNewSubview:(id)a0;
- (void)expandSubview:(id)a0;
- (unsigned long long)numberOfSubviews;
- (void)removeSubviewAtIndex:(unsigned long long)a0;

@end
