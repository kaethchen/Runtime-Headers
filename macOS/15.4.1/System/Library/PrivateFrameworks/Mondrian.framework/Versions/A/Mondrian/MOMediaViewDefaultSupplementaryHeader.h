@class NSTextField;

@interface MOMediaViewDefaultSupplementaryHeader : MOMediaViewSupplementary

@property (readonly, nonatomic) NSTextField *titleTextField;
@property (readonly, nonatomic) NSTextField *subtitleTextField;

+ (struct CGSize { double x0; double x1; })defaultSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)setOrientation:(unsigned long long)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)MOMediaViewDefaultSupplementaryHeaderCommonInit;
- (void)prepareForRecycling;
- (void)updateWithMediaSection:(id)a0;

@end
