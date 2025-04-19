@class NSArray, NSString, NSStackView;

@interface MUStackView : NSView <MUContentStackViewProtocol> {
    NSStackView *_stackView;
}

@property (nonatomic) long long alignment;
@property (nonatomic) long long axis;
@property (nonatomic) long long distribution;
@property (nonatomic) double spacing;
@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } contentEdgeInsets;
@property (readonly, copy, nonatomic) NSArray *arrangedSubviews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addArrangedSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertArrangedSubview:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeArrangedSubview:(id)a0;
- (void)setArrangedSubviews:(id)a0;
- (void)setCustomSpacing:(double)a0 afterView:(id)a1;
- (void)_setupStackView;
- (void)addArrangedSubview:(id)a0 withCustomSpacing:(double)a1;

@end
