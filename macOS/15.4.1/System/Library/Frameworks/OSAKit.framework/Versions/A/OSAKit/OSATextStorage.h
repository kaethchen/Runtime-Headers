@class NSMutableAttributedString, NSDate;

@interface OSATextStorage : NSTextStorage {
    NSMutableAttributedString *_contents;
    NSDate *_date;
    BOOL _usesTabs;
    BOOL _wrapsLines;
    BOOL _indentsWrappedLines;
    unsigned long long _tabWidth;
    unsigned long long _indentWidth;
}

+ (void)initialize;
+ (id)defaultPlainTextFont;
+ (void)sourceStylesChanged;

- (void)dealloc;
- (id)init;
- (unsigned long long)length;
- (id)string;
- (id)initWithString:(id)a0;
- (void)insertAttributedString:(id)a0 atIndex:(unsigned long long)a1;
- (void)addAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)addAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)appendAttributedString:(id)a0;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)date;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeAttribute:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)setAttributedString:(id)a0;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)contents;
- (void)edited:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 changeInLength:(long long)a2;
- (id)initWithAttributedString:(id)a0;
- (void)insertValue:(id)a0 atIndex:(unsigned long long)a1 inPropertyWithKey:(id)a2;
- (void)removeValueAtIndex:(unsigned long long)a0 fromPropertyWithKey:(id)a1;
- (void)replaceValueAtIndex:(unsigned long long)a0 inPropertyWithKey:(id)a1 withValue:(id)a2;
- (void)setDate:(id)a0;
- (void)fixAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setContents:(id)a0;
- (id)undoManager;
- (BOOL)usesTabs;
- (void)_fixAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forceExtended:(BOOL)a1;
- (void)setIndentWidth:(unsigned long long)a0;
- (id)_firstLayoutManager;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })findString:(id)a0 previousFindRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 limitRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 options:(unsigned long long)a3 matchStyle:(int)a4 wrap:(BOOL)a5;
- (void)fixTabStopsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)fixWrappedLineIndentsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)indentWidth;
- (BOOL)indentsWrappedLines;
- (id)initWithOwnedMutableAttributedString:(id)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1 withUndoManager:(id)a2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1 withUndoManager:(id)a2;
- (void)setIndentsWrappedLines:(BOOL)a0;
- (void)setTabWidth:(unsigned long long)a0;
- (void)setUsesTabs:(BOOL)a0;
- (void)setWrapsLines:(BOOL)a0;
- (unsigned long long)tabWidth;
- (BOOL)wrapsLines;

@end
