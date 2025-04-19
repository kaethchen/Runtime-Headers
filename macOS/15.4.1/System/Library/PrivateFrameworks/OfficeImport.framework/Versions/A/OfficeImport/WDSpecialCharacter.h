@interface WDSpecialCharacter : WDRunWithCharacterProperties {
    int mType;
}

- (id)description;
- (id)initWithParagraph:(id)a0;
- (int)runType;
- (int)characterType;
- (void)setCharacterType:(int)a0;

@end
