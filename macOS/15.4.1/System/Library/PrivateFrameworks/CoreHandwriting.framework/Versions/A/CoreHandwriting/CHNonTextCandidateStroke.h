@class NSMutableDictionary, CHEncodedStrokeIdentifier;

@interface CHNonTextCandidateStroke : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    long long _fallbackClassification;
    long long _classificationAsNonText;
    long long _substrokesCount;
    double _lineError;
    double _containerScore;
    double _lineOrientationAngle;
    double _boundsDiagonal;
    CHEncodedStrokeIdentifier *_strokeIdentifier;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _enlargedBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rotatedBounds;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *supportByStrokeIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *sizeRatioByStrokeIdentifier;
@property (readonly, nonatomic) double support;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStroke:(id)a0 consistingOfSubstrokes:(id)a1 classificationAsNonText:(long long)a2 lineOrientation:(double)a3 lineError:(double)a4 containerScore:(double)a5 fallbackClassification:(long long)a6;
- (id)initWithStrokeIdentifier:(id)a0 substrokesCount:(long long)a1 classificationAsNonText:(long long)a2 lineOrientation:(double)a3 lineError:(double)a4 containerScore:(double)a5 fallbackClassification:(long long)a6 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 boundsDiagonal:(double)a8 enlargedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a9 rotatedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a10 supportByStrokeIdentifier:(id)a11 sizeRatioByStrokeIdentifier:(id)a12 support:(double)a13;
- (BOOL)isSupportedByValidTextStrokesOrNonTextCandidates:(id)a0;

@end
