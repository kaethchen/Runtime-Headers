@class NSView;

@interface NSContentMaskingView : NSView {
    void /* unknown type, empty encoding */ _contentConstraints;
    void /* unknown type, empty encoding */ _maskConstraints;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ contentView;
@property (nonatomic, retain) NSView *maskView;
@property (nonatomic) void /* unknown type, empty encoding */ contentMaskEquivalencePriority;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
