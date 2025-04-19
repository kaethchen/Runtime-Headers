@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned long long scanLocation;
    struct { unsigned char caseSensitive : 1; unsigned int  : 31; } flags;
}

- (void)dealloc;
- (id)string;
- (id)initWithString:(id)a0;
- (id)locale;
- (void)setLocale:(id)a0;
- (id)_invertedSkipSet;
- (BOOL)caseSensitive;
- (id)charactersToBeSkipped;
- (BOOL)scanInt:(int *)a0;
- (unsigned long long)scanLocation;
- (BOOL)scanLongLong:(long long *)a0;
- (void)setCaseSensitive:(BOOL)a0;
- (void)setCharactersToBeSkipped:(id)a0;
- (void)setScanLocation:(unsigned long long)a0;

@end
