@class NSMutableArray;

@interface SCRWebStitchedTextPhrase : NSObject

@property (retain, nonatomic) NSMutableArray *tokens;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addTokenWithAttributedString:(id)a0 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forElement:(id)a2;

@end
