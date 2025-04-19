@class NSString, _NSTextFinderImpl;

@interface _NSTextFinderReplacementStringArray : NSArray {
    struct _NSRange { unsigned long long x0; unsigned long long x1; } *replacementRanges;
    unsigned long long length;
    NSString *string;
    NSString *replacementString;
    BOOL hasReplacePattern;
    BOOL replacePatternHasBackreferences;
    id replacementStringCache;
    _NSTextFinderImpl *impl;
}

- (void)dealloc;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithTextFinder:(id)a0 replacementRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 length:(unsigned long long)a2;

@end
