@interface PIRetouchBrushStroke : NUMutableBrushStroke

@property (nonatomic) long long type;
@property (nonatomic) struct CGPoint { double x; double y; } sourceOffset;
@property (nonatomic) BOOL repairEdges;
@property (readonly, nonatomic) BOOL hasSource;

+ (id)dictionaryFromBrushStroke:(id)a0;

@end
