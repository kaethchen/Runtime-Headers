@class NSArray;

@interface CHReflowableTextResultToken : CHReflowableTextToken

@property (readonly, copy, nonatomic) NSArray *strokeIdentifiers;
@property (readonly, copy, nonatomic) NSArray *nonTextStrokeIdentifiers;

- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 strokeIdentifiers:(id)a1 nonTextStrokeIdentifiers:(id)a2 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a3 textSize:(id)a4 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 hasPrecedingSpace:(BOOL)a6;

@end
