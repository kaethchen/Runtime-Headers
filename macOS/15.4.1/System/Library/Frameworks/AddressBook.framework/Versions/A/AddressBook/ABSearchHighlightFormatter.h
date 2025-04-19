@class NSArray;

@interface ABSearchHighlightFormatter : NSFormatter {
    NSArray *mHighlightStrings;
}

- (void).cxx_destruct;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)stringForObjectValue:(id)a0;
- (void)setHighlightStrings:(id)a0;

@end
