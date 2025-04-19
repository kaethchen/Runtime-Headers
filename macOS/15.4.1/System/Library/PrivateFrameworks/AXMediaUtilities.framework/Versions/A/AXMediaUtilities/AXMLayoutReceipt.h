@class NSMutableArray;

@interface AXMLayoutReceipt : AXMLayoutItem {
    NSMutableArray *_rows;
}

+ (id)region:(id)a0;

- (void).cxx_destruct;
- (void)addRow:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)rows;
- (id)firstLine;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFrame;

@end
