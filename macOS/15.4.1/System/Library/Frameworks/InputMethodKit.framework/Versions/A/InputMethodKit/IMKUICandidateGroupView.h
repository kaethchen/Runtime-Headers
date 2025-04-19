@class NSMutableDictionary, NSArray, IMKUICandidateLayoutTraits, IMKUIDelimiter;

@interface IMKUICandidateGroupView : NSView

@property (retain, nonatomic) NSMutableDictionary *itemToViewMapping;
@property (retain, nonatomic) IMKUIDelimiter *delimiter;
@property (retain, nonatomic) IMKUICandidateLayoutTraits *layoutTraits;
@property (retain, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end
