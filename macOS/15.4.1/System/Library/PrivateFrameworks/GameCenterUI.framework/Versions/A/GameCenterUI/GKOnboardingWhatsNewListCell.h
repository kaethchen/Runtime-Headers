@class NSArray, NSImageView, NSTextField;

@interface GKOnboardingWhatsNewListCell : NSView

@property (retain, nonatomic) NSImageView *icon;
@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *subtitleLabel;
@property (retain, nonatomic) NSArray *normalConstraints;
@property (retain, nonatomic) NSArray *axConstraints;
@property (readonly, nonatomic) unsigned long long currentCellType;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (void)loadView;
- (void)createConstarints;
- (id)getIconImageFromBundle:(id)a0;
- (id)getIconImageFromSFSymbol:(id)a0;
- (void)setupCell;

@end
