@class NSArray, NSString;

@interface WBSReaderFontManager : NSObject {
    NSArray *_validatedFonts;
}

@property (readonly, nonatomic) NSArray *fonts;
@property (readonly, nonatomic) NSArray *possibleFonts;
@property (readonly, copy, nonatomic) NSString *languageTag;

- (id)init;
- (void).cxx_destruct;
- (void)_fontDownloadDidFinish:(id)a0;
- (id)defaultFontForLanguageTag:(id)a0;
- (id)fontWithFontFamilyName:(id)a0;
- (void)updateLanguageTag:(id)a0;

@end
