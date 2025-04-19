@class NSString;

@interface IPACropOperation : IPAOperation <DGAutoCalculable>

@property (nonatomic) double straightenAngle;
@property (nonatomic) double pitchAngle;
@property (nonatomic) double yawAngle;
@property (nonatomic) double yawAngleInDegreesCCW;
@property (nonatomic) double yawAngleInRadiansCCW;
@property (nonatomic) double pitchAngleInDegreesCCW;
@property (nonatomic) double pitchAngleInRadiansCCW;
@property (nonatomic) double straightenAngleInRadiansCCW;
@property (nonatomic) double straightenAngleInDegreesCCW;
@property (nonatomic) long long xOrigin;
@property (nonatomic) long long yOrigin;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; } cropRect;
@property (nonatomic) unsigned long long constraintWidth;
@property (nonatomic) unsigned long long constraintHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)autoCalculatedInputKeys;
+ (BOOL)supportsAutoCalculatedValues;

- (id)init;
- (void)setNilValueForKey:(id)a0;
- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (BOOL)isMigratable;
- (BOOL)changesGeometry;
- (void)_applyAutoSettings:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cropRectForProposedCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 srcMasterSize:(struct CGSize { double x0; double x1; })a1 srcOrientation:(long long)a2 srcAngle:(double)a3 dstMasterSize:(struct CGSize { double x0; double x1; })a4 dstOrientation:(long long)a5 dstAngle:(double)a6;
- (BOOL)applySettingsDictionary:(id)a0;
- (unsigned long long)geometryHash;
- (int)geometryOperationType;
- (BOOL)isGeometricallyHashEquivalent:(id)a0;
- (struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })legacyCropRectForInputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a0;
- (void)masterRectChangedFromRect:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 toRect:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a1;
- (void)updatePresetOperationUsingNewRenderDescription:(id)a0 presetAdjustmentStack:(id)a1;

@end
