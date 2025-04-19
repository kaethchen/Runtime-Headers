@class NSArray;

@interface CHTransformedTextLine : CHTransformedTextSegment {
    struct PrincipalLines { struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *__begin_; struct CGPoint *__end_; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *__value_; } __end_cap_; } descender; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *__begin_; struct CGPoint *__end_; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *__value_; } __end_cap_; } base; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *__begin_; struct CGPoint *__end_; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *__value_; } __end_cap_; } median; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *__begin_; struct CGPoint *__end_; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *__value_; } __end_cap_; } top; } _principalLines;
    struct BoundingBox { double x_min; double x_max; double y_min; double y_max; } _boundingBox;
    long long _strokeClassification;
}

@property (readonly) NSArray *segments;
@property (nonatomic) BOOL fromCachedTokens;

+ (struct PrincipalLines { struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; } x0; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; } x1; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; } x2; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; } x3; })principalLinesFromSegments:(id)a0;

- (id)string;
- (void).cxx_destruct;
- (id)locale;
- (id).cxx_construct;
- (struct BoundingBox { double x0; double x1; double x2; double x3; })boundingBox;
- (id)tokens;
- (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })points;
- (id)initWithSegments:(id)a0;
- (id)initWithSegment:(id)a0;
- (void)addTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)splitIntoTokens;
- (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })filteredPoints:(struct CGSize { double x0; double x1; })a0;
- (void)_addTextLineSegment:(id)a0;
- (void)addSupportStroke:(id)a0;
- (void)addSupportStroke:(id)a0 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })clippedPoints:(struct CGSize { double x0; double x1; })a0 min:(struct CGPoint { double x0; double x1; })a1 max:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithStrokes:(id)a0 tokens:(id)a1 points:(const void *)a2 strokePoints:(const void *)a3 locale:(id)a4 strokeClassification:(long long)a5 principalLines:(struct PrincipalLines { struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; } x0; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; } x1; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; } x2; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; } x3; })a6 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a7;
- (void)mergeTransformedText:(id)a0;
- (struct PrincipalLines { struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; } x0; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; } x1; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; } x2; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; } x3; })principalLines;
- (long long)strokeClassification;
- (struct vector<std::vector<CGPoint>, std::allocator<std::vector<CGPoint>>> { void *x0; void *x1; struct __compressed_pair<std::vector<CGPoint> *, std::allocator<std::vector<CGPoint>>> { void *x0; } x2; })strokePoints;
- (id)textStrokes;
- (id)tokenDistanceSizes:(BOOL)a0;

@end
