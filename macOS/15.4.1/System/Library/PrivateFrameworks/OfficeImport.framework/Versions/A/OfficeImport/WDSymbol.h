@class WDFont;

@interface WDSymbol : WDRunWithCharacterProperties {
    WDFont *mFont;
    unsigned short mCharacter;
}

- (id)description;
- (void).cxx_destruct;
- (id)font;
- (void)setFont:(id)a0;
- (id)initWithParagraph:(id)a0;
- (int)runType;
- (unsigned short)character;
- (void)setCharacter:(unsigned short)a0;

@end
