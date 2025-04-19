@class NSString, NSIndexSet;

@interface CHMutableTokenizedMathResultToken : CHTokenizedMathResultToken {
    NSString *_string;
    NSIndexSet *_strokeIndexes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSIndexSet *strokeIndexes;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) double score;
@property (nonatomic) unsigned long long properties;
@property (copy, nonatomic) NSString *maskedAlternative;
@property (nonatomic) double maskedAlternativeScore;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)string;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setString:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setProperties:(unsigned long long)a0;
- (void)setScore:(double)a0;
- (void)appendToken:(id)a0;
- (id)initWithString:(id)a0 strokeIndexes:(id)a1 score:(double)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 properties:(unsigned long long)a4 maskedAlternative:(id)a5 maskedAlternativeScore:(double)a6;
- (void)setMaskedAlternative:(id)a0;
- (void)setMaskedAlternativeScore:(double)a0;
- (void)setStrokeIndexes:(id)a0;
- (id)strokeIndexes;

@end
