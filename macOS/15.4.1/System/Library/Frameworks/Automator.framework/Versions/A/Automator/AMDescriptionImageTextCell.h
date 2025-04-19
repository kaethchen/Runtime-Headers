@class NSDictionary, NSString;

@interface AMDescriptionImageTextCell : AMImageTextCell

@property (retain, nonatomic) NSDictionary *titleAttrs;
@property (retain, nonatomic) NSDictionary *selectedTitleAttrs;
@property (retain, nonatomic) NSDictionary *infoAttrs;
@property (retain, nonatomic) NSDictionary *selectedInfoAttrs;
@property (copy, nonatomic) NSString *infoString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;

@end
