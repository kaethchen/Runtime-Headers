@class NSDictionary, NSMutableDictionary, WBSReaderFontManager;

@interface WBSReaderConfigurationManager : NSObject {
    long long _theme;
    long long _darkModeTheme;
    NSMutableDictionary *_fontFamilyNameForLanguageTag;
    BOOL _prefersLargerDefaultFontSize;
}

@property (readonly, nonatomic) NSDictionary *configurationToSave;
@property (readonly, nonatomic) NSDictionary *configurationToSendToWebPage;
@property (nonatomic) BOOL javaScriptEnabled;
@property (nonatomic) BOOL darkModeEnabled;
@property (readonly, nonatomic) BOOL canMakeTextBigger;
@property (readonly, nonatomic) BOOL canMakeTextSmaller;
@property (readonly, nonatomic) BOOL resettingTextSizeWouldHaveEffect;
@property (readonly, nonatomic) WBSReaderFontManager *fontManager;
@property (readonly, nonatomic) long long effectiveTextZoomIndex;
@property (nonatomic) long long textZoomIndex;

- (void).cxx_destruct;
- (void)makeTextSmaller;
- (long long)_defaultTextZoomIndex;
- (long long)_defaultThemeForAppearance:(long long)a0;
- (void)_migrateToVersion5IfNecessary;
- (id)fontForLanguageTag:(id)a0;
- (id)initWithPersistedSettingsAsDictionaryRepresentation:(id)a0 fontManager:(id)a1;
- (id)initWithPersistedSettingsAsDictionaryRepresentation:(id)a0 fontManager:(id)a1 prefersLargerDefaultFontSize:(BOOL)a2;
- (void)makeTextBigger;
- (void)resetTextSize;
- (void)setFont:(id)a0 forLanguageTag:(id)a1;
- (void)setTheme:(long long)a0 forAppearance:(long long)a1;
- (long long)themeForAppearance:(long long)a0;

@end
