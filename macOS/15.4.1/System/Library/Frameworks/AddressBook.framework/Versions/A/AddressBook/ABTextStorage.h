@class NSMutableAttributedString;

@interface ABTextStorage : NSTextStorage <NSCopying, NSMutableCopying> {
    NSMutableAttributedString *_cm_string;
    BOOL _customAttributeFixing;
}

+ (id)firstLineParagraphStyle;
+ (void)invalidateParagraphStyles;
+ (unsigned long long)maxLabelStringWidth;
+ (id)noteFirstLineParagraphStyle;
+ (id)noteSecondLineParagraphStyle;
+ (id)secondLineParagraphStyle;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)string;
- (void).cxx_destruct;
- (void)addAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)fixAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)fixesAttributesLazily;
- (void)_setAttributedString:(id)a0;
- (void)setEnableCustomAttributeFixing:(BOOL)a0;
- (BOOL)enableCustomAttributeFixing;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })findAttachement:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })findAttributeNamed:(id)a0 value:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })findNextOccuranceOfAttributeNamed:(id)a0 startingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })findPopupForField:(id)a0 excludingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })findPreviousOccuranceOfAttributeNamed:(id)a0 startingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)fixAddressRulersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)fixNotesRulersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
