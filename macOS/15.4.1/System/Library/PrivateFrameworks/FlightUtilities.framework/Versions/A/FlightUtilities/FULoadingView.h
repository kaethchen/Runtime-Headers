@class NSProgressIndicator, FULabel;

@interface FULoadingView : NSView

@property (weak) NSProgressIndicator *progressIndicator;
@property (weak) FULabel *loadingLabel;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setStyleProvider:(id)a0;

@end
