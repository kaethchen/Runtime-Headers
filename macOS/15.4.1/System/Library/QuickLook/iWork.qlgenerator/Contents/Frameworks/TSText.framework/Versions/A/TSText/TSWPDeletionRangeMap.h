@class TSWPMutableRangeArray;

@interface TSWPDeletionRangeMap : NSObject <NSCopying> {
    TSWPMutableRangeArray *_removedRanges;
}

@property (nonatomic) BOOL preferDeletedRangeStartsForUnmapping;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } subRange;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)deletedRanges;
- (BOOL)containsCharIndex:(unsigned long long)a0;
- (id)initWithSubRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 removeRanges:(id)a1;
- (id)inverseRangesInStorageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)mappedCharIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })mappedCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)unmappedCharIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })unmappedCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)adjustByDelta:(long long)a0 startingAt:(unsigned long long)a1;

@end
