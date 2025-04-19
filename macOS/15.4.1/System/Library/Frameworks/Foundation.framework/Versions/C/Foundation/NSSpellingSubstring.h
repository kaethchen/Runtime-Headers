@class NSString;

@interface NSSpellingSubstring : NSString {
    NSString *_originalString;
    unsigned long long _startingOffset;
}

- (void)dealloc;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithOriginalString:(id)a0 startingOffset:(unsigned long long)a1;

@end
