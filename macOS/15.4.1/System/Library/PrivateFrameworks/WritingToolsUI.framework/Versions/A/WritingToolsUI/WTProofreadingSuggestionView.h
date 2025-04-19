@class WTTextSuggestion;

@interface WTProofreadingSuggestionView : NSView

@property (copy, nonatomic) id /* block */ revertClickedBlock;
@property (readonly, nonatomic) WTTextSuggestion *suggestion;
@property (readonly, nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } padding;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithSuggestion:(id)a0 forContext:(id)a1 onRevertClick:(id /* block */)a2;
- (void)revertButtonClicked;

@end
