@class NSAttributedString;

@interface ODCEmptyMessageTableView : NSTableView {
    NSAttributedString *_emptyListMsg;
    int _msgRow;
}

- (void)dealloc;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)setAttributedMesageForEmptyList:(id)a0;
- (void)setMesageForEmptyList:(id)a0;
- (void)setMessageRow:(int)a0;

@end
