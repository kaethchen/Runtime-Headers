@class NSTextStorage;

@interface NSSubTextStorage : NSTextStorage {
    NSTextStorage *_parent;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    BOOL _releasing;
    BOOL _editing;
}

- (BOOL)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)string;
- (id)initWithString:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (Class)classForCoder;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithAttributedString:(id)a0;
- (void)setTextStorage:(id)a0;
- (id)_subtextStorageFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)allowsOriginalFontMetricsOverride;
- (id)initWithTextStorage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)processEditingForTextStorage:(id)a0 edited:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3 invalidatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (id)textStorage;
- (void)textStorage:(id)a0 edited:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3 invalidatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;

@end
