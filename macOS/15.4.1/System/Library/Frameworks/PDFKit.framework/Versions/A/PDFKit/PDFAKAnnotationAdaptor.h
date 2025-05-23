@class PDFAKAnnotationAdaptorPrivate, PDFAnnotation, AKAnnotation;

@interface PDFAKAnnotationAdaptor : NSObject {
    PDFAKAnnotationAdaptorPrivate *_private;
}

@property (readonly, weak, nonatomic) PDFAnnotation *pdfAnnotation;
@property (readonly, nonatomic) AKAnnotation *akAnnotation;

+ (id)getPDFAnnotationAssociatedWith:(id)a0;
+ (id)_akAnnotationInstanceForPDFAnnotationSubtype:(id)a0 withOptionalWidgetFieldType:(id)a1;
+ (Class)_akAnnotationSubclassForWidgetFieldType:(id)a0;
+ (id)_pdfAnnotationInstanceForAKAnnotation:(id)a0;
+ (id)annotationAdaptorWithPDFAnnotation:(id)a0 andCGPDFAnnotation:(struct CGPDFAnnotation { } *)a1 andPDFDictionary:(struct CGPDFDictionary { } *)a2;
+ (id)annotationAdaptorWithPDFAnnotation:(id)a0 andCGPDFAnnotation:(struct CGPDFAnnotation { } *)a1 andPDFDictionary:(struct CGPDFDictionary { } *)a2 updatePDFAnnotationIfNeeded:(BOOL)a3;
+ (void)associatePDFAnnotation:(id)a0 withAKAnnotation:(id)a1;
+ (id)newPDFAnnotationFromAKAnnotation:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)teardown;
- (void)_teardown;
- (void)_startObservingAnnotation;
- (void)_stopObservingAnnotation;
- (void)_syncTextLabel:(id)a0;
- (void)didRemoveValueForAnnotationKey:(id)a0;
- (id)_colorFromColorOrArray:(id)a0;
- (void)_invalidateAppearanceStreamForAnnotation:(id)a0 withKey:(id)a1 andNewValue:(id)a2;
- (void)_syncAction:(id)a0;
- (void)_syncAdditionalAction:(id)a0;
- (void)_syncAnnotationTextForAnnotation:(id)a0 withKey:(id)a1 andNewValue:(id)a2;
- (void)_syncAppearanceDictionaryUpdatingEditsDisableAppearanceOverride:(BOOL)a0;
- (void)_syncAppearanceState:(id)a0;
- (void)_syncAppleExtras:(id)a0;
- (void)_syncArrowHeadStyleForAnnotation:(id)a0 withKey:(id)a1 andNewValue:(id)a2;
- (void)_syncAuthorForAnnotation:(id)a0 withKey:(id)a1 andNewValue:(id)a2;
- (void)_syncBorder:(id)a0;
- (void)_syncBorderStyle:(id)a0;
- (void)_syncBoundingRectangleForAnnotation:(id)a0 withKey:(id)a1 andNewValue:(id)a2;
- (void)_syncChildAnnotationForAnnotation:(id)a0 withKey:(id)a1 andNewValue:(id)a2;
- (void)_syncColor:(id)a0;
- (void)_syncColorForAnnotation:(id)a0 withKey:(id)a1 andNewValue:(id)a2;
- (void)_syncContents:(id)a0;
- (void)_syncContentsForAnnotation:(id)a0 withKey:(id)a1 andNewValue:(id)a2;
- (void)_syncCornerRadiusForAnnotation:(id)a0 withKey:(id)a1 andNewValue:(id)a2;
- (void)_syncDashedForAnnotation:(id)a0 withKey:(id)a1 andNewValue:(id)a2;
- (void)_syncDate:(id)a0;
- (void)_syncDefaultAppearance:(id)a0;
- (void)_syncDestination:(id)a0;
- (void)_syncEndPointForAnnotation:(id)a0 withKey:(id)a1 andNewValue:(id)a2;
- (void)_syncEverythingToAKAnnotation;
- (void)_syncEverythingToPDFAnnotation;
- (void)_syncFlags:(unsigned long long)a0;
- (void)_syncHighlightingMode:(id)a0;
- (void)_syncIconName:(id)a0;
- (void)_syncInkPathForAnnotation:(id)a0 withKey:(id)a1 andNewValue:(id)a2;
- (void)_syncInklist:(id)a0;
- (void)_syncInteriorColor:(id)a0;
- (void)_syncLineEndingStyles:(id)a0;
- (void)_syncLinePoints:(id)a0;
- (void)_syncModificationDateForAnnotation:(id)a0 withKey:(id)a1 andNewValue:(id)a2;
- (void)_syncName:(id)a0;
- (void)_syncOpen:(BOOL)a0;
- (void)_syncPage:(id)a0;
- (void)_syncParent:(id)a0;
- (void)_syncPopup:(id)a0;
- (void)_syncQuadding:(long long)a0;
- (void)_syncRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_syncStartPointForAnnotation:(id)a0 withKey:(id)a1 andNewValue:(id)a2;
- (void)_syncStrokeWidthForAnnotation:(id)a0 withKey:(id)a1 andNewValue:(id)a2;
- (void)_syncSubtype:(id)a0;
- (void)_syncWidgetAppearance:(id)a0;
- (void)_syncWidgetDefaultValue:(id)a0;
- (void)_syncWidgetFieldFlags:(unsigned long long)a0;
- (void)_syncWidgetFieldType:(id)a0;
- (void)_syncWidgetMaxLen:(unsigned long long)a0;
- (void)_syncWidgetOptions:(id)a0;
- (void)_syncWidgetTextLabelUI:(id)a0;
- (void)_syncWidgetValue:(id)a0;
- (void)_updateDashedPatternForStrokeWidth:(double)a0 isDashed:(BOOL)a1;
- (void)didReplaceAllValuesWithNewDictionary:(id)a0 andOldDictionary:(id)a1;
- (void)didSetValue:(id)a0 forAnnotationKey:(id)a1;
- (id)initWithPDFAnnotation:(id)a0 andAKAnnotation:(id)a1;
- (void)invalidateAppearanceStream;

@end
