@class NSString, CHTextSize;

@interface CHReflowableTextToken : NSObject

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) struct { struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } descender; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } base; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } median; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } top; } principalLines;
@property (readonly, copy, nonatomic) CHTextSize *textSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) BOOL hasPrecedingSpace;
@property (readonly, nonatomic) BOOL hasValidPrincipalLines;
@property (readonly, nonatomic) double principalOrientation;

- (void).cxx_destruct;
- (id)asFullTextResultWithStrokeIdentifiers:(id)a0 strokeProvider:(id)a1;
- (id)initWithString:(id)a0 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a1 textSize:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 hasPrecedingSpace:(BOOL)a4;
- (id)initWithTokenizedTextResultToken:(id)a0;

@end
