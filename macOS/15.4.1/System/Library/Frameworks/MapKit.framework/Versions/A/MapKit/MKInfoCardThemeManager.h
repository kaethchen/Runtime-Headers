@class NSString, NSColor, NSDictionary;

@interface MKInfoCardThemeManager : NSObject <MKInfoCardTheme> {
    BOOL _themeWasExplicitySet;
    NSDictionary *_colors;
    id /* block */ _tintColorProvider;
}

@property (nonatomic) BOOL useSmallFont;
@property (readonly, nonatomic) unsigned long long themeType;
@property (readonly, nonatomic) NSString *javaScriptName;
@property (readonly, nonatomic) BOOL isDarkTheme;
@property (readonly, nonatomic) NSColor *textColor;
@property (readonly, nonatomic) NSColor *lightTextColor;
@property (readonly, nonatomic) NSColor *tertiaryTextColor;
@property (readonly, nonatomic) NSColor *tintColor;
@property (readonly, nonatomic) NSColor *highlightedTintColor;
@property (readonly, nonatomic) NSColor *separatorLineColor;
@property (readonly, nonatomic) NSColor *rowColor;
@property (readonly, nonatomic) NSColor *selectedRowColor;
@property (readonly, nonatomic) NSColor *disabledActionRowTextColor;
@property (readonly, nonatomic) NSColor *disabledActionRowBackgroundColor;
@property (readonly, nonatomic) NSColor *normalActionRowBackgroundColor;
@property (readonly, nonatomic) NSColor *normalActionRowBackgroundPressedColor;
@property (readonly, nonatomic) NSColor *headerPrimaryButtonNormalColor;
@property (readonly, nonatomic) NSColor *headerPrimaryButtonHighlightedColor;
@property (readonly, nonatomic) NSColor *transitOntimeTextColor;
@property (readonly, nonatomic) NSColor *transitDelayedTextColor;
@property (readonly, nonatomic) NSColor *transitChevronBackgroundColor;
@property (readonly, nonatomic) NSColor *normalBackgroundColor;
@property (readonly, nonatomic) NSColor *buttonNormalColor;
@property (readonly, nonatomic) NSColor *buttonHighlightedColor;
@property (readonly, nonatomic) NSColor *ratingBarStartColor;
@property (readonly, nonatomic) NSColor *ratingBarEndColor;
@property (readonly, nonatomic) NSColor *ratingBarBackgroundColor;
@property (readonly, nonatomic) NSColor *transitIncidentBackgroundColor;
@property (readonly, nonatomic) NSColor *cardBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setTheme:(unsigned long long)a0;
+ (id)currentTheme;
+ (void)setTintColorProvider:(id /* block */)a0;
+ (unsigned long long)themeType;
+ (id)themeWithThemeType:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned long long)_currentSystemTheme;
- (id)_initWithThemeType:(unsigned long long)a0;
- (void)_interfaceThemeChanged;
- (BOOL)_isInSpotlightContext;
- (void)_setTheme:(unsigned long long)a0;
- (void)_setTintColorProvider:(id /* block */)a0;

@end
