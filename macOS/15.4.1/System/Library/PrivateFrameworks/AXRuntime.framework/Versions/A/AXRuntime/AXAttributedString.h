@interface AXAttributedString : NSMutableString <NSCopying> {
    struct __CFAttributedString { } *_string;
}

+ (id)string;
+ (id)axAttributedStringWithString:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (id)string;
- (id)initWithString:(id)a0;
- (void)appendFormat:(id)a0;
- (void)appendString:(id)a0;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)attributesAtIndex:(long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (Class)classForCoder;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)substringFromIndex:(unsigned long long)a0;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)lowercaseString;
- (void)setAttributes:(id)a0;
- (id)uppercaseString;
- (id)stringByReplacingOccurrencesOfString:(id)a0 withString:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)stringByTrimmingCharactersInSet:(id)a0;
- (void)enumerateAttribute:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (id)attributedString;
- (void)setAttribute:(id)a0 forKey:(id)a1;
- (BOOL)hasAttribute:(id)a0;
- (BOOL)hasAttributes;
- (id)initWithCFAttributedString:(struct __CFAttributedString { } *)a0;
- (BOOL)isAXAttributedString;
- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id *)a0;
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id *)a0;
- (void)addAttribute:(id)a0 forKey:(id)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)appendAXAttributedString:(id)a0;
- (void)appendStringOrAXAttributedString:(id)a0;
- (id)attributeValueForKey:(id)a0;
- (id)axAttributedStringByReplacingOccurrencesOfString:(id)a0 withString:(id)a1;
- (id)axAttributedStringDescription;
- (id)axStringByReplacingCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (struct __CFAttributedString { } *)cfAttributedString;
- (id)coalescedAttributes;
- (id)coalescedFontAttributes;
- (void)convertAttachmentsWithBlock:(id /* block */)a0;
- (void)enumerateAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (void)enumerateAttributesUsingBlock:(id /* block */)a0;
- (id)initWithStringOrAttributedString:(id)a0;
- (void)removeAttributes:(id)a0;
- (void)replaceString:(struct __CFString { } *)a0;
- (void)setAttribute:(id)a0 forKey:(id)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setAttributes:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
