@interface NSSecureStringWrapper : NSString {
    struct __CFString { } *_originalString;
    unsigned short _bulletCharacter;
    unsigned long long _length;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (unsigned long long)length;
- (const unsigned short *)_fastCharacterContents;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithBulletCharacter:(unsigned short)a0 length:(unsigned long long)a1;
- (id)initWithOriginalString:(struct __CFString { } *)a0;

@end
