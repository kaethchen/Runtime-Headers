@class NSArray, CRNormalizedQuad, NSString, NSLocale;

@interface CHReflowableTextLine : NSObject <CRDirectionalRegion>

@property (nonatomic) BOOL hasStartingLineBreak;
@property (nonatomic) BOOL hasEndingLineBreak;
@property (readonly, copy, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) struct { struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } descender; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } base; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } median; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } top; } principalLines;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) double headIndent;
@property (readonly, nonatomic) double leading;
@property (readonly, nonatomic) unsigned long long alignmentType;
@property (readonly, nonatomic) long long writingDirection;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_normalizedLocaleForCRLineWrapper:(id)a0;
+ (id)alignShortReflowableLines:(id)a0;
+ (id)reflowableLines:(id)a0 withLineWrapper:(id)a1;
+ (BOOL)supportsReflowForLocale:(id)a0;
+ (BOOL)useRightToLeftReflow:(id)a0;

- (id)string;
- (void).cxx_destruct;
- (id)_string;
- (id)initWithTokens:(id)a0 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 headIndent:(double)a3 leading:(double)a4 hasStartingLineBreak:(BOOL)a5 hasEndingLineBreak:(BOOL)a6 alignmentType:(unsigned long long)a7 writingDirection:(long long)a8 locale:(id)a9;

@end
