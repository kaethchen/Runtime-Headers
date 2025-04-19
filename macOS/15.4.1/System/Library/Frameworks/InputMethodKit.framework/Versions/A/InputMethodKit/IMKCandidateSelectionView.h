@class NSArray, NSButton, IMKUIWindowBasedCandidateController;

@interface IMKCandidateSelectionView : IMKUIView

@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) NSArray *sortingModes;
@property (retain, nonatomic) NSButton *radarButton;
@property (nonatomic) IMKUIWindowBasedCandidateController *candidateController;
@property (nonatomic) unsigned long long selectedIndex;

+ (id)_buttonWithTitle:(id)a0 fontSize:(double)a1 tag:(long long)a2 target:(id)a3 properties:(id)a4;
+ (id)_radarButtonWithTag:(long long)a0 target:(id)a1 properties:(id)a2;
+ (double)minimumWidthForSelectionModes:(id)a0;
+ (double)minimumWidthForSelectionModesWithRadarButton:(id)a0;
+ (double)totalButtonWidthWithButtons:(id)a0;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)update;
- (void)setButtonFrames;
- (void)setSortingModes:(id)a0 localizedNames:(id)a1;
- (void)_buttonSelected:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 properties:(id)a1;
- (void)resetRadarButtonState;

@end
