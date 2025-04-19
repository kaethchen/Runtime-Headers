@class NSString, NSArray, CUIVectorGlyphPath;
@protocol CUIVectorGlyhLayerDelegate;

@interface CUIVectorGlyphLayer : NSObject {
    NSArray *_sublayers;
    struct CGPath { } *_clipPathFromSublayers;
}

@property (weak, nonatomic) id<CUIVectorGlyhLayerDelegate> delegate;
@property (readonly, nonatomic) BOOL needsWideGamut;
@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, retain, nonatomic) NSArray *tags;
@property (readonly, nonatomic) unsigned long long motionGroup;
@property (readonly, nonatomic) BOOL alwaysPulses;
@property (readonly, nonatomic) BOOL alwaysRotates;
@property (readonly, nonatomic) BOOL alwaysBreathes;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) double valueThreshold;
@property (readonly, nonatomic) BOOL isEraserLayer;
@property (readonly, nonatomic) double strokeWidth;
@property (readonly, nonatomic) int lineCap;
@property (readonly, nonatomic) int lineJoin;
@property (readonly, retain, nonatomic) id referenceShape;
@property (readonly, retain, nonatomic) CUIVectorGlyphPath *referencePath;
@property (readonly, retain, nonatomic) NSArray *sublayers;
@property (readonly, nonatomic) BOOL isPassthrough;

+ (BOOL)_classesContainRenderModeClass:(id)a0;
+ (unsigned int)_fillActionAtom;
+ (unsigned int)_alwaysBreathesAtom;
+ (unsigned int)_alwaysPulsesAtom;
+ (unsigned int)_alwaysRotatesAtom;
+ (unsigned int)_clearBehindAtom;
+ (id)_colorNameForRenderingStyle:(id)a0;
+ (id)_createLayerWithLayerTreeNode:(struct CGSVGNode { } *)a0 layerName:(id)a1 index:(unsigned long long)a2 subpaths:(id)a3 delegate:(id)a4;
+ (id)_createPathFromStyle:(struct CGSVGAttributeMap { } *)a0 subpaths:(id)a1;
+ (id)_createShapeLayerWithLayerTreeNode:(struct CGSVGNode { } *)a0 layerName:(id)a1 index:(unsigned long long)a2 shapes:(id)a3 delegate:(id)a4;
+ (id)_createSimpleLayerWithLayerTreeNode:(struct CGSVGNode { } *)a0 layerName:(id)a1 index:(unsigned long long)a2 subpaths:(id)a3 delegate:(id)a4;
+ (id)_createTreeWithLayerTreeNode:(struct CGSVGNode { } *)a0 modePrefix:(id)a1 layerName:(id)a2 index:(unsigned long long)a3 subpaths:(id)a4 delegate:(id)a5;
+ (struct CGColor { } *)_fillColorFromStyle:(struct CGSVGAttributeMap { } *)a0;
+ (BOOL)_indexFromStyleSuffix:(id)a0 integer:(unsigned long long *)a1;
+ (id)_layerHierarchyStyleNames;
+ (unsigned int)_layerTagsAtom;
+ (int)_lineCapFromStyle:(struct CGSVGAttributeMap { } *)a0;
+ (int)_lineJoinFromStyle:(struct CGSVGAttributeMap { } *)a0;
+ (unsigned int)_motionGroupAtom;
+ (struct CGColor { } *)_strokeColorFromStyle:(struct CGSVGAttributeMap { } *)a0;
+ (double)_strokeWidthForNode:(struct CGSVGNode { } *)a0;
+ (double)_strokeWidthFromStyle:(struct CGSVGAttributeMap { } *)a0;
+ (unsigned int)_subpathIndicesAtom;
+ (id)_suffixForNamedStyleWithPrefix:(id)a0 styles:(id)a1;
+ (unsigned int)_variableThresholdAtom;
+ (id)createLayerGroupWithLayerNames:(id)a0 delegate:(id)a1;
+ (id)createLayerGroupWithLayerTree:(struct CGSVGNode { } *)a0 layerNames:(id)a1 shapes:(id)a2 delegate:(id)a3;
+ (id)createLayerGroupWithLayerTree:(struct CGSVGNode { } *)a0 modePrefix:(id)a1 shapes:(id)a2 delegate:(id)a3;

- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)path;
- (struct CGPath { } *)shape;
- (id)__initGroupWithName:(id)a0 index:(unsigned long long)a1 sublayers:(id)a2 attributes:(struct CGSVGAttributeMap { } *)a3 style:(struct CGSVGAttributeMap { } *)a4 passthrough:(BOOL)a5 delegate:(id)a6;
- (id)__initTreeWithName:(id)a0 index:(unsigned long long)a1 sublayers:(id)a2 attributes:(struct CGSVGAttributeMap { } *)a3 style:(struct CGSVGAttributeMap { } *)a4 delegate:(id)a5;
- (BOOL)_anyLayerAlwaysPulses;
- (BOOL)_anyLayerAlwaysRotates;
- (struct CGColor { } *)_colorForVariableThreshold:(double)a0 variableMinValue:(double)a1 variableMaxValue:(double)a2 onFillColor:(struct CGColor { } *)a3 offFillColor:(struct CGColor { } *)a4;
- (id)_initWithName:(id)a0 index:(unsigned long long)a1 shape:(id)a2 strokeWidth:(double)a3 attributes:(struct CGSVGAttributeMap { } *)a4 style:(struct CGSVGAttributeMap { } *)a5 delegate:(id)a6;
- (id)_initWithName:(id)a0 index:(unsigned long long)a1 sublayers:(id)a2 attributes:(struct CGSVGAttributeMap { } *)a3 style:(struct CGSVGAttributeMap { } *)a4 delegate:(id)a5;
- (void)_readCSSAttributes:(struct CGSVGAttributeMap { } *)a0 styleAttributes:(struct CGSVGAttributeMap { } *)a1;
- (void)_setAllLayersAlwaysPulse:(BOOL)a0;
- (void)_setAllLayersAlwaysRotate:(BOOL)a0;
- (void)_setAlwaysPulses:(BOOL)a0;
- (void)_setAlwaysRotates:(BOOL)a0;
- (BOOL)anyLayerNeedsWideGamutColor;
- (struct CGPath { } *)copyClipShape;
- (struct CGImage { } *)createImageUsingScaleFactor:(double)a0 targetSize:(struct CGSize { double x0; double x1; })a1 variableMinValue:(double)a2 variableMaxValue:(double)a3 onFillColor:(struct CGColor { } *)a4 offFillColor:(struct CGColor { } *)a5;
- (struct CGImage { } *)createSublayerMaskUsingScaleFactor:(double)a0 targetSize:(struct CGSize { double x0; double x1; })a1 maskColor:(struct CGColor { } *)a2;
- (id)debugDescriptionWithIndentLevel:(unsigned long long)a0;
- (void)drawInContext:(struct CGContext { } *)a0 scaleFactor:(double)a1 targetSize:(struct CGSize { double x0; double x1; })a2 variableMinValue:(double)a3 variableMaxValue:(double)a4 onFillColor:(struct CGColor { } *)a5 offFillColor:(struct CGColor { } *)a6;
- (id)pathAtScale:(double)a0;
- (struct CGPath { } *)shapeAtScale:(double)a0;

@end
