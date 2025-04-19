@class OADDrawable;

@interface WDOfficeArt : WDRunWithCharacterProperties {
    OADDrawable *mDrawable;
    BOOL mFloating;
}

+ (int)textBoxTextTypeForRegularTextType:(int)a0;

- (id)description;
- (void).cxx_destruct;
- (void)clearDrawable;
- (id)imageData;
- (id)imageName;
- (BOOL)isFloating;
- (void)setFloating:(BOOL)a0;
- (id)initWithParagraph:(id)a0;
- (id)drawable;
- (int)runType;
- (void)checkForFloating:(id)a0;
- (id)imageBlipRef;
- (BOOL)isDrawableOverridden;
- (id)overrideDrawable;
- (void)propagateTextTypeToDrawables;
- (void)setDrawable:(id)a0;
- (void)setImageBlipRef:(id)a0;
- (void)setTextType:(int)a0 recursivelyToDrawable:(id)a1;

@end
