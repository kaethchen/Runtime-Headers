@class EDProcessors, ESDContainer, EDWarnings, EDWorkbook, EDPageSetup, EDString, EDColorReference, EDHeaderFooter, NSMutableArray, OITSUPointerKeyDictionary;

@interface EDSheet : OCDDelayedNode {
    EDString *mName;
    BOOL mHidden;
    BOOL mDisplayFormulas;
    BOOL mDisplayGridlines;
    EDColorReference *mDefaultGridlineColorReference;
    EDHeaderFooter *mHeaderFooter;
    EDPageSetup *mPageSetup;
    NSMutableArray *mDrawables;
    OITSUPointerKeyDictionary *mTextBoxMap;
    OITSUPointerKeyDictionary *mCommentMap;
    EDProcessors *mProcessors;
    EDWarnings *mWarnings;
    ESDContainer *mEscherDrawing;
}

@property (nonatomic) BOOL isDialogSheet;
@property (readonly, weak) EDWorkbook *workbook;

+ (id)sheetWithWorkbook:(id)a0;

- (void)dealloc;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)a0;
- (void)setName:(id)a0;
- (void)teardown;
- (unsigned long long)drawableCount;
- (id)warnings;
- (void)setup;
- (void)applyProcessors;
- (void)addDrawable:(id)a0;
- (unsigned long long)commentCount;
- (id)defaultGridlineColor;
- (id)defaultGridlineColorReference;
- (void)doneWithNonRowContent;
- (id)drawableAtIndex:(unsigned long long)a0;
- (id)drawableEnumerator;
- (id)drawables;
- (id)edCommentForShape:(id)a0;
- (id)edTextBoxForShape:(id)a0;
- (id)escherDrawing;
- (id)headerFooter;
- (id)initWithWorkbook:(id)a0;
- (BOOL)isDisplayFormulas;
- (BOOL)isDisplayGridlines;
- (id)pageSetup;
- (id)processors;
- (void)reduceMemoryIfPossible;
- (void)removeDrawableAtIndex:(unsigned long long)a0;
- (void)setDefaultGridlineColor:(id)a0;
- (void)setDefaultGridlineColorReference:(id)a0;
- (void)setDisplayFormulas:(BOOL)a0;
- (void)setDisplayGridlines:(BOOL)a0;
- (void)setEDComment:(id)a0 forShape:(id)a1;
- (void)setEDTextBox:(id)a0 forShape:(id)a1;
- (void)setEscherDrawing:(id)a0;
- (void)setHeaderFooter:(id)a0;
- (void)setPageSetup:(id)a0;

@end
