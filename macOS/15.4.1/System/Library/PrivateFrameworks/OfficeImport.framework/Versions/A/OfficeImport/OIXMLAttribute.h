@class NSString;

@interface OIXMLAttribute : OIXMLNode {
    NSString *_name;
    NSString *_value;
}

+ (id)attributeWithName:(id)a0 stringValue:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (void).cxx_destruct;
- (id)stringValue;
- (void)setStringValue:(id)a0;
- (id)initWithName:(id)a0 stringValue:(id)a1;
- (void)_appendXMLStringToString:(struct __CFString { } *)a0 level:(int)a1;

@end
