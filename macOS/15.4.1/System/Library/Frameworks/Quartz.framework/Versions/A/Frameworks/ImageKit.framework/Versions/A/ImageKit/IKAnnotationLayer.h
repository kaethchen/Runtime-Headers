@class NSString, CALayer, IKComposer;

@interface IKAnnotationLayer : CALayer {
    CALayer *_activeAnnotation;
    IKComposer *_composer;
}

@property (copy) NSString *undoString;
@property int annotationType;

+ (double)fadeDuration;
+ (id)addAnnotationLayer:(id)a0;
+ (BOOL)registerLayerWithView:(id)a0;

- (void)changeColor:(id)a0;
- (void)changeFont:(id)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)clearAnnotation;
- (void)addCursorRects;
- (void)createAnnotationWithEvent:(id)a0;
- (void)deleteSelectedAnnotations;
- (void)drawInContext:(struct CGContext { } *)a0 drawSelection:(BOOL)a1;
- (BOOL)ikKeyDown:(id)a0;
- (void)ikMouseDown:(id)a0;
- (BOOL)ikPerformKeyEquivalent:(id)a0;
- (void)initialAddAnnotation:(id)a0;
- (void)mouseDownOutsideSelection:(id)a0;
- (void)mouseUpOnAddingLayer:(id)a0;
- (void)moveAnnotationByX:(int)a0 Y:(int)a1;
- (void)selectLayer:(id)a0 extendSelection:(BOOL)a1;
- (void)setup:(id)a0;
- (void)toggleArrowAtEnd;
- (void)toggleArrowAtStart;
- (void)toggleDash;
- (void)toggleShadow;
- (void)toolmodeWillChangeFrom:(long long)a0 to:(long long)a1;
- (void)updateBorderWidth:(int)a0;
- (void)willBeRemovedFromSuperlayer;

@end
