@class NSNumberFormatter;

@interface NSXMLNSNumberTransformerName : NSValueTransformer {
    NSNumberFormatter *_formatter;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void)dealloc;
- (id)init;
- (id)_oldTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
