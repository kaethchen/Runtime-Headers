@interface UTF8Formatter : APFormatter {
    unsigned long long _maxByteCount;
}

+ (id)utf8Formatter;
+ (id)utf8Formatter:(int)a0;
+ (id)utf8FormatterWithMaxByteCount:(int)a0 maxLength:(int)a1;

- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (id)initWithMaxByteCount:(int)a0 maxLength:(int)a1;
- (unsigned long long)maxByteCount;
- (void)setMaxByteCount:(unsigned long long)a0;

@end
