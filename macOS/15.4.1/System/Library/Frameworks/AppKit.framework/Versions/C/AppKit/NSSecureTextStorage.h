@class NSFont;

@interface NSSecureTextStorage : NSTextStorage {
    struct __CFAttributedString { } *_storage;
    NSFont *_font;
    _Atomic long long _level;
    unsigned short _bulletCharacter;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)string;
- (void)addAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)beginSecureMode;
- (unsigned short)bullferCharacter;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })doubleClickAtIndex:(unsigned long long)a0;
- (void)endSecureMode;
- (id)font;
- (unsigned long long)lineBreakBeforeIndex:(unsigned long long)a0 withinRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)lineBreakByHyphenatingBeforeIndex:(unsigned long long)a0 withinRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)nextWordFromIndex:(unsigned long long)a0 forward:(BOOL)a1;
- (void)setBulletCharacter:(unsigned short)a0;
- (void)setFont:(id)a0;

@end
