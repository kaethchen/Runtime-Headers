@interface ICTableTextStorage : ICTTTextStorage

- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (void)textStorage:(id)a0 didProcessEditing:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3;
- (id)initWithDocument:(id)a0;

@end
