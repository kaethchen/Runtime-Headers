@class NSArray, NSString;

@interface TISCTextRunRequest : NSObject {
    NSArray *_strings;
    struct CGColor { } *_color;
    double _maxFontSize;
    double _minFontSize;
    BOOL _allowTruncation;
    NSString *_truncationSentinel;
    unsigned long long _widthGroup;
}

+ (id)textRunRequestWithStrings:(id)a0 color:(struct CGColor { } *)a1 maxFontSize:(double)a2 minFontSize:(double)a3 allowTruncation:(BOOL)a4 truncationSentinel:(id)a5 widthGroup:(unsigned long long)a6;

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGColor { } *)color;
- (id)strings;
- (double)maxFontSize;
- (double)minFontSize;
- (id)truncationSentinel;
- (BOOL)allowTruncation;
- (unsigned long long)widthGroup;

@end
