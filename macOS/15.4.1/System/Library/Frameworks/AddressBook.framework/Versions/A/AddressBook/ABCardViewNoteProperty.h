@interface ABCardViewNoteProperty : ABCardViewSingleValueProperty

- (BOOL)canRemove;
- (BOOL)allowsCustomLabels;
- (id)defaultLabelWithAccountName:(id)a0;
- (BOOL)needsCardViewBorderDrawing;
- (BOOL)shouldUseAccountNameInLabel;

@end
