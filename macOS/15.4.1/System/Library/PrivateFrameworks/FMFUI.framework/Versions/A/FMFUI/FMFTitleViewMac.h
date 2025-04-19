@class NSTextField;

@interface FMFTitleViewMac : NSView

@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *subtitleLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLocation:(id)a0;
- (void)_updateLabels:(id)a0;

@end
