@class NSString;

@interface NSPinyinString : NSString {
    NSString *_string;
    unsigned long long _syllableCount;
    unsigned long long _score;
    unsigned long long _rangeCount;
    unsigned long long _replacementCount;
    unsigned long long _transpositionCount;
    unsigned long long _insertionCount;
    unsigned long long _deletionCount;
    unsigned long long _firstModificationIndex;
    struct _NSRange { unsigned long long x0; unsigned long long x1; } *_ranges;
    BOOL _lastSyllableIsPartial;
}

+ (id)_alternativesForInputString:(id)a0;
+ (id)_prefixesForInputString:(id)a0;
+ (id)alternativesForInputString:(id)a0;
+ (id)prefixesForInputString:(id)a0;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)length;
- (id)string;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)indexOfFirstModification;
- (id)initWithString:(id)a0 syllableCount:(unsigned long long)a1 lastSyllableIsPartial:(BOOL)a2 score:(unsigned long long)a3 replacementCount:(unsigned long long)a4 transpositionCount:(unsigned long long)a5 insertionCount:(unsigned long long)a6 deletionCount:(unsigned long long)a7 indexOfFirstModification:(unsigned long long)a8 rangeCount:(unsigned long long)a9 ranges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a10;
- (id)initWithString:(id)a0 syllableCount:(unsigned long long)a1 lastSyllableIsPartial:(BOOL)a2 score:(unsigned long long)a3 replacementCount:(unsigned long long)a4 transpositionCount:(unsigned long long)a5 insertionCount:(unsigned long long)a6 deletionCount:(unsigned long long)a7 rangeCount:(unsigned long long)a8 ranges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a9;
- (BOOL)lastSyllableIsPartial;
- (id)nonPinyinIndexSet;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nonPinyinRangeAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfDeletions;
- (unsigned long long)numberOfInsertions;
- (unsigned long long)numberOfNonPinyinRanges;
- (unsigned long long)numberOfReplacements;
- (unsigned long long)numberOfTranspositions;
- (id)replacementObjectForPortCoder:(id)a0;
- (unsigned long long)score;
- (unsigned long long)syllableCount;

@end
