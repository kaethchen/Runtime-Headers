@interface _NSBPlistMappedString : NSString {
    unsigned long long payload;
}

+ (void)initialize;
+ (id)createStringWithOffset:(long long)a0 intoMappingData:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (unsigned long long)length;
- (unsigned long long)fastestEncoding;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)smallestEncoding;

@end
