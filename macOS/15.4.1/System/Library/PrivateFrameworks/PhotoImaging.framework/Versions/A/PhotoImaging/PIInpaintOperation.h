@class NSArray, NUBrushStroke;

@interface PIInpaintOperation : NSObject

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) BOOL hasExclusionMask;
@property (readonly, nonatomic) BOOL isTapSelect;
@property (readonly, nonatomic) BOOL isTargetPoints;
@property (readonly, nonatomic) BOOL isFilledBrushStroke;
@property (readonly, nonatomic) BOOL isScribbledSelection;
@property (readonly, nonatomic) BOOL isLassoedSelection;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSArray *maskIdentifiers;
@property (readonly, nonatomic) NSArray *exclusionMaskIdentifiers;
@property (readonly, nonatomic) NUBrushStroke *brushStroke;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } sourceOffset;
@property (readonly, nonatomic) BOOL repairEdges;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)nu_updateDigest:(id)a0;
- (BOOL)isEqualtoInpaintOperation:(id)a0;

@end
