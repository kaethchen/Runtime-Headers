@class NSString;

@interface OIXMLElement : OIXMLNode {
    NSString *_name;
    id _attributes;
    id _children;
    BOOL _hasMultipleAttributes;
    BOOL _hasMultipleChildren;
    unsigned char _type;
}

+ (id)elementWithType:(unsigned char)a0;
+ (id)elementWithType:(unsigned char)a0 stringValue:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (void).cxx_destruct;
- (id)stringValue;
- (void)setStringValue:(id)a0;
- (void)addAttribute:(id)a0;
- (void)addChild:(id)a0;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithType:(unsigned char)a0;
- (id)contentString;
- (id)initWithType:(unsigned char)a0 stringValue:(id)a1;
- (long long)attributeCount;
- (void)_appendXMLStringToString:(struct __CFString { } *)a0 level:(int)a1;
- (long long)childrenCount;
- (id)closingTagString;
- (BOOL)isEmptyHTMLElement;
- (id)openingTagString;

@end
