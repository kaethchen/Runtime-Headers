@class NSString;

@interface NEIKEv2StringAttribute : NEIKEv2ConfigurationAttribute <NSCopying> {
    NSString *_stringValue;
    unsigned long long _customType;
}

@property (readonly) NSString *stringValue;

+ (id)copyTypeDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)attributeType;
- (unsigned long long)valueType;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initCustomWithAttributeType:(unsigned long long)a0 attributeName:(id)a1 stringValue:(id)a2;
- (id)initWithStringValue:(id)a0;

@end
