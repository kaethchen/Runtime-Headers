@interface NSMutableStringProxy : NSDistantObject

- (BOOL)getBytes:(void *)a0 maxLength:(unsigned long long)a1 usedLength:(unsigned long long *)a2 encoding:(unsigned long long)a3 options:(unsigned long long)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 remainingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a6;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)getCharacters:(unsigned short *)a0;
- (void)getCString:(char *)a0;
- (void)getCString:(char *)a0 maxLength:(unsigned long long)a1;
- (void)getCString:(char *)a0 maxLength:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 remainingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;

@end
