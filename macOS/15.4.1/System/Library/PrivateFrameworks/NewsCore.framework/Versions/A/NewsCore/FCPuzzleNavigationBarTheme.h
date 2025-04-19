@class FCColor;

@interface FCPuzzleNavigationBarTheme : NSObject <FCPuzzleNavigationBarThemeProviding>

@property (readonly, nonatomic) FCColor *navigationBarBackgroundColor;
@property (readonly, nonatomic) FCColor *navigationBarBackgroundDarkModeColor;
@property (readonly, nonatomic) FCColor *rankForegroundColor;
@property (readonly, nonatomic) FCColor *rankForegroundDarkModeColor;
@property (readonly, nonatomic) FCColor *barButtonItemTintColor;
@property (readonly, nonatomic) FCColor *barButtonItemTintDarkModeColor;
@property (readonly, nonatomic) FCColor *barButtonItemBackgroundColor;
@property (readonly, nonatomic) FCColor *barButtonItemBackgroundDarkModeColor;
@property (readonly, nonatomic) FCColor *shareTextForegroundColor;

- (void).cxx_destruct;
- (id)initWithNavigationBarBackgroundColor:(id)a0 navigationBarBackgroundDarkModeColor:(id)a1 rankForegroundColor:(id)a2 rankForegroundDarkModeColor:(id)a3 barButtonItemTintColor:(id)a4 barButtonItemTintDarkModeColor:(id)a5 barButtonItemBackgroundColor:(id)a6 barButtonItemBackgroundDarkModeColor:(id)a7 shareTextForegroundColor:(id)a8;

@end
