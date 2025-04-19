@class NSString;

@interface MusicKit_SoftLinking_CoverArtworkRecipe : NSObject

@property (readonly, nonatomic) long long expression;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) struct CGColor { } *backgroundColor;
@property (readonly, nonatomic) struct CGColor { } *primaryColor;
@property (readonly, nonatomic) struct CGColor { } *secondaryColor;
@property (readonly, nonatomic) struct CGColor { } *tertiaryColor;
@property (readonly, nonatomic) struct CGColor { } *textColor;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;

- (id)description;
- (void).cxx_destruct;
- (id)_stringFromColor:(struct CGColor { } *)a0;
- (id)_stringFromExpression:(long long)a0;
- (id)initWithExpression:(long long)a0 version:(id)a1 backgroundColor:(struct CGColor { } *)a2 primaryColor:(struct CGColor { } *)a3 secondaryColor:(struct CGColor { } *)a4 tertiaryColor:(struct CGColor { } *)a5 textColor:(struct CGColor { } *)a6;

@end
