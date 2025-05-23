@interface TSTFormulaEqualsTokenAttachment : TSWPUIGraphicalAttachment

- (id)description;
- (struct CGSize { double x0; double x1; })size;
- (double)baselineOffset;
- (id)rendererForAttachment;
- (BOOL)wantsSelectionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
