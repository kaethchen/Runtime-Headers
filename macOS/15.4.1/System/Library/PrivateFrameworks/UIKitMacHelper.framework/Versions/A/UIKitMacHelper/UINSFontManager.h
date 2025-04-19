@class NSFont, NSFontManager;
@protocol UINSFontManagerDelegate;

@interface UINSFontManager : NSObject {
    NSFontManager *_fontManager;
    NSFont *_originalFontBeforeFallback;
    NSFont *_fallbackFont;
}

@property (readonly, weak) id<UINSFontManagerDelegate> delegate;

+ (void)toggleFontPanelShown:(id)a0;
+ (id)fontManagerForSceneIdentifier:(id)a0;
+ (BOOL)isFontPanelVisible;

- (void).cxx_destruct;
- (void)changeAttributes:(id)a0;
- (void)changeColor:(id)a0;
- (void)changeFont:(id)a0;
- (id)convertAttributes:(id)a0;
- (void)setSelectedAttributes:(id)a0 isMultiple:(BOOL)a1;
- (void)changeColorWithColor:(id)a0;
- (id)initWithDelegate:(id)a0 scene:(id)a1;

@end
