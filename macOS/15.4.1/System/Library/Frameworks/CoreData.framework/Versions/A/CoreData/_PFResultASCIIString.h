@interface _PFResultASCIIString : _PFResultString {
    unsigned int _length;
}

+ (void)initialize;
+ (unsigned long long)bufferOffset;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (const char *)UTF8String;
- (unsigned long long)length;
- (BOOL)_isCString;
- (unsigned long long)cStringLength;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)isEqualToString:(id)a0;
- (void)getCharacters:(unsigned short *)a0;
- (void)getCString:(char *)a0;

@end
