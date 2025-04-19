@class NSAppearance;

@interface BKSecureIntentViewModel : NSObject

@property (retain, nonatomic) NSAppearance *effectiveAppearance;

+ (id)_SIPromptTitle;
+ (id)_secureIntentBodyString;
+ (id)modelWithAppearance:(id)a0;

- (void).cxx_destruct;
- (BOOL)hasTouchBar;
- (BOOL)isDark;
- (BOOL)_isJ31x;
- (BOOL)_isJ43x;
- (BOOL)_isJ45x;
- (BOOL)_isJ62x;
- (BOOL)_isJ180;
- (BOOL)_isJ434;
- (BOOL)_isJ456;
- (BOOL)_isJ473;
- (BOOL)_isJ773g;
- (BOOL)_isJ773s;
- (BOOL)_isMacStudio;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j180DisplayModel:(BOOL)a0;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j31xDisplayModel;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j31xDisplayModelSettings;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j375DisplayModel:(BOOL)a0;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j473DisplayModel:(BOOL)a0;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j773DisplayModel:(BOOL)a0;
- (id)deviceHousingColorIndex;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })imageDisplayModelForDeviceModelInBuddy;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })imageDisplayModelForDeviceModelInDemo;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })imageDisplayModelForDeviceModelInSystemPrefs;
- (BOOL)isMBP16Inch;

@end
