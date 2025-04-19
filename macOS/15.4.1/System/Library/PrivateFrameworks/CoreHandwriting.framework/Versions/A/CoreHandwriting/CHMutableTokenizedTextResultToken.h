@class NSString, NSIndexSet, NSLocale;

@interface CHMutableTokenizedTextResultToken : CHTokenizedTextResultToken {
    NSString *_string;
    NSIndexSet *_strokeIndexes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSIndexSet *strokeIndexes;
@property (nonatomic) unsigned int wordID;
@property (nonatomic) double modelScore;
@property (nonatomic) double recognitionScore;
@property (nonatomic) double combinedScore;
@property (nonatomic) double alignmentScore;
@property (nonatomic) unsigned long long properties;
@property (nonatomic) unsigned long long inputSources;
@property (copy, nonatomic) NSLocale *recognizerSourceLocale;
@property (nonatomic) long long substrokeCount;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

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
- (void)setWordID:(unsigned int)a0;
- (void)setCombinedScore:(double)a0;
- (id)initWithString:(id)a0 strokeIndexes:(id)a1 wordID:(unsigned int)a2 modelScore:(double)a3 recognitionScore:(double)a4 combinedScore:(double)a5 alignmentScore:(double)a6 properties:(unsigned long long)a7 recognizerSourceLocale:(id)a8 inputSources:(unsigned long long)a9 substrokeCount:(long long)a10 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a11 originalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a12 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a13;
- (void)setAlignmentScore:(double)a0;
- (void)setInputSources:(unsigned long long)a0;
- (void)setModelScore:(double)a0;
- (void)setRecognitionScore:(double)a0;
- (void)setRecognizerSourceLocale:(id)a0;
- (void)setStrokeIndexes:(id)a0;
- (void)setSubstrokeCount:(long long)a0;
- (id)strokeIndexes;

@end
