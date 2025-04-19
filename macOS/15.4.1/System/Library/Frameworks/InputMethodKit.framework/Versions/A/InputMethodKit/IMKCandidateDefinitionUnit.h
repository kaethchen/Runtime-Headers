@class NSString, NSAttributedString, IMKCandidate;

@interface IMKCandidateDefinitionUnit : NSObject <IMKCandidateIndexing>

@property (copy, nonatomic) NSString *annotation;
@property (copy, nonatomic) NSAttributedString *extraAnnotation;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasDefinition;
@property (nonatomic) BOOL hasNote;
@property (readonly, nonatomic) NSString *axDescriptionString;
@property (readonly, nonatomic) NSString *axValueString;
@property (readonly, nonatomic) NSString *axHelpString;
@property (nonatomic) BOOL selectionTurnedOff;
@property (readonly, nonatomic) IMKCandidate *imkCandidate;
@property (readonly, nonatomic) NSString *uniqueKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dictionaryFromDebugLog:(id)a0;
+ (id)sharedTextStorage;

- (void)dealloc;
- (id)descriptionHTML;
- (void)drawFunctionKeyInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selected:(BOOL)a1;
- (id)descriptionHTMLAndBaseURL:(id *)a0;
- (void)drawAnnotationsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutUnit:(id)a1 selected:(BOOL)a2 properties:(id)a3;
- (void)drawBackgroundForTouchBarInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selected:(BOOL)a1 roundLeftCorners:(BOOL)a2 roundRightCorners:(BOOL)a3;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selected:(BOOL)a1 properties:(id)a2 backgroundColor:(id)a3 drawsBackgroundColor:(BOOL)a4 view:(id)a5;
- (void)drawCandidateDataInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutUnit:(id)a1 selected:(BOOL)a2 properties:(id)a3;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutUnit:(id)a1 selectionKey:(id)a2 properties:(id)a3 backgroundColor:(id)a4 drawsBackgroundColor:(BOOL)a5 roundsLeftCorners:(BOOL)a6 roundsRightCorners:(BOOL)a7 view:(id)a8;
- (void)drawSelectionKey:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 layoutUnit:(id)a2 selected:(BOOL)a3 properties:(id)a4;
- (void)turnOffFontSmoothing:(id)a0;

@end
