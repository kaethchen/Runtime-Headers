@class NSLocale;

@interface CHTokenizedTextResultToken : CHTokenizedResultToken <NSCopying, NSMutableCopying> {
    double _modelScore;
    double _recognitionScore;
    double _combinedScore;
    double _alignmentScore;
    unsigned long long _properties;
    long long _substrokeCount;
}

@property (readonly, nonatomic) double modelScore;
@property (readonly, nonatomic) double recognitionScore;
@property (readonly, nonatomic) double combinedScore;
@property (readonly, nonatomic) double alignmentScore;
@property (readonly, nonatomic) unsigned long long properties;
@property (readonly, nonatomic) long long substrokeCount;
@property (readonly, nonatomic) unsigned int wordID;
@property (readonly, nonatomic) unsigned long long inputSources;
@property (readonly, nonatomic) BOOL isOriginal;
@property (readonly, nonatomic) BOOL isTopOriginal;
@property (readonly, nonatomic) BOOL isTransliterated;
@property (readonly, copy, nonatomic) NSLocale *recognizerSourceLocale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalBounds;
@property (readonly, nonatomic) struct { struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } descender; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } base; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } median; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } top; } principalLines;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)makeOriginalToken:(unsigned long long)a0;
+ (id)tokenWithString:(id)a0 strokeIndexes:(id)a1 wordID:(unsigned int)a2 modelScore:(double)a3 recognitionScore:(double)a4 combinedScore:(double)a5 alignmentScore:(double)a6 properties:(unsigned long long)a7 recognizerSourceLocale:(id)a8 inputSources:(unsigned long long)a9 substrokeCount:(long long)a10 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a11 originalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a12 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a13;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)inputSources;
- (BOOL)isOriginal;
- (BOOL)hasValidPrincipalLines;
- (double)heuristicTextScore;
- (id)initWithString:(id)a0 strokeIndexes:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithString:(id)a0 strokeIndexes:(id)a1 wordID:(unsigned int)a2 modelScore:(double)a3 recognitionScore:(double)a4 combinedScore:(double)a5 alignmentScore:(double)a6 properties:(unsigned long long)a7 recognizerSourceLocale:(id)a8 inputSources:(unsigned long long)a9 substrokeCount:(long long)a10 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a11;
- (id)initWithString:(id)a0 strokeIndexes:(id)a1 wordID:(unsigned int)a2 modelScore:(double)a3 recognitionScore:(double)a4 combinedScore:(double)a5 alignmentScore:(double)a6 properties:(unsigned long long)a7 recognizerSourceLocale:(id)a8 inputSources:(unsigned long long)a9 substrokeCount:(long long)a10 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a11 originalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a12 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a13;
- (unsigned long long)inputSourceModifiersCount;
- (BOOL)isEquivalentToToken:(id)a0;
- (BOOL)isTopOriginal;
- (BOOL)isTransliterated;
- (double)principalOrientation;
- (id)recognizerSourceLocale;

@end
