@class NSUUID, EQKitEnvironment, TSULocale;
@protocol TSWPTOCController;

@interface TSWPDocumentRoot : TSCKDocumentRoot <TSWPObjectIndex> {
    NSUUID *_uuid;
}

@property (readonly, nonatomic) double stickyCommentScaleMultiplier;
@property (readonly, nonatomic, getter=isChangeTrackingEnabled) BOOL changeTrackingEnabled;
@property (readonly, nonatomic) BOOL supportHeaderFooterParagraphAlignmentInInspectors;
@property (readonly, nonatomic) EQKitEnvironment *equationEnvironment;
@property (nonatomic) BOOL didRemoveMissingAttachments;
@property (readonly, nonatomic) TSULocale *typesettingLocale;
@property (readonly, nonatomic) id<TSWPTOCController> tocInfoController;
@property (nonatomic) BOOL laysOutBodyVertically;

+ (id)STIXFonts;

- (void).cxx_destruct;
- (id)documentId;
- (double)bodyWidth;
- (void)willClose;
- (void)documentDidLoad;
- (BOOL)shouldHyphenate;
- (struct __CFLocale { } *)hyphenationLocale;
- (id)changeSessionManagerForModel:(id)a0;
- (id)changeVisibility;
- (id)documentFonts;
- (id)unavailableDocumentFonts;
- (BOOL)useLigatures;
- (int)naturalAlignmentAtCharIndex:(unsigned long long)a0 inTextStorage:(id)a1;
- (int)verticalAlignmentForTextStorage:(id)a0;
- (BOOL)isSectionModel:(id)a0;
- (BOOL)cellCommentsAllowedOnInfo:(id)a0;
- (BOOL)containsVerticalText;
- (id)flowInfoContainer;
- (BOOL)isDrawableOnSectionTemplatePage:(id)a0;
- (BOOL)isSectionInfo:(id)a0;
- (BOOL)isSectionTemplateInfo:(id)a0;
- (BOOL)textIsVerticalInStorage:(id)a0 atCharIndex:(unsigned long long)a1;
- (void)fontUpdatedForStyleClient:(id)a0;
- (BOOL)validatedLoadFromUnarchiver:(id)a0;
- (BOOL)containsEquation;
- (id)documentTSWPFontObjects;
- (int)fullyJustifiedAlignmentAtCharIndex:(unsigned long long)a0 inTextStorage:(id)a1;
- (BOOL)has_30356142_build;
- (id)p_fontsInStylesheetUsingBlock:(id /* block */)a0;

@end
