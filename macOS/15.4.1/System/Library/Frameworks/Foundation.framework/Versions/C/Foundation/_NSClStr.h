@interface _NSClStr : NSString {
    unsigned long long length;
    unsigned short *characters;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUTF8String:(const char *)a0;
- (unsigned long long)length;
- (id)initWithString:(id)a0;
- (const unsigned short *)_fastCharacterContents;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;

@end
