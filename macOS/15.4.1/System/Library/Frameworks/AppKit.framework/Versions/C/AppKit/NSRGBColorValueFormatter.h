@class NSNumberFormatter, NSRGBColorValueTransformer;

@interface NSRGBColorValueFormatter : NSFormatter {
    long long _entryMode;
    NSNumberFormatter *_currentFormatter;
    NSRGBColorValueTransformer *_currentTransformer;
}

@property (readonly) long long entryMode;

+ (id)formatterForEntryMode:(long long)a0;

- (void)dealloc;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)stringForObjectValue:(id)a0;
- (id)_currentFormatter;
- (id)_currentTransformer;
- (id)initWithEntryMode:(long long)a0;

@end
