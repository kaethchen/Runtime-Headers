@class NSMutableArray;

@interface _NSTextFinderSubstringProxy : NSString {
    id _client;
    NSMutableArray *_strings;
    NSMutableArray *_subRanges;
    NSMutableArray *_endsInBoundaryArray;
    unsigned long long _length;
}

- (void)dealloc;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfString:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 locale:(id)a3;
- (void)_getSubstring:(id *)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 searchBoundary:(BOOL *)a2 atCharacterIndex:(unsigned long long)a3;
- (unsigned long long)_nextSearchBoundaryAfterOrIncluding:(BOOL)a0 index:(unsigned long long)a1 forward:(BOOL)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_textfinder_firstMatchForRegularExpression:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithTextFinderClient:(id)a0;

@end
