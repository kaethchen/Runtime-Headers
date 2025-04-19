@interface MTLTypeInternal : MTLType {
    unsigned long long _dataType;
}

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)dataType;
- (id)formattedDescription:(unsigned long long)a0;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (id)initWithDataType:(unsigned long long)a0;

@end
