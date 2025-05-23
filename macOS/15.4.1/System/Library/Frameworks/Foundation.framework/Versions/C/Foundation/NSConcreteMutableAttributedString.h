@class NSMutableString, NSMutableRLEArray;

@interface NSConcreteMutableAttributedString : NSMutableAttributedString {
    NSMutableString *mutableString;
    NSMutableRLEArray *mutableAttributes;
    struct { unsigned char attributeFixingDisabled : 8; unsigned char mayNeedIntentResolution : 8; unsigned short  : 16; } fields;
}

+ (BOOL)supportsSecureCoding;
+ (Class)_mutableStringClass;

- (void)dealloc;
- (id)init;
- (unsigned long long)length;
- (id)string;
- (id)initWithString:(id)a0;
- (void)addAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)initWithCoder:(id)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (void)_markIntentsResolved;
- (void)_markRequiringIntentResolution;
- (BOOL)_mayRequireIntentResolution;
- (id)_runArrayHoldingAttributes;
- (void)edited:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 changeInLength:(long long)a2;
- (id)initWithAttributedString:(id)a0;

@end
