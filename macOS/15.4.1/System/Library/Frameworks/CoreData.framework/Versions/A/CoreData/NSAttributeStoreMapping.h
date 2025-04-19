@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
    int _externalType;
    unsigned int _externalPrecision;
    int _externalScale;
}

- (BOOL)isEqual:(id)a0;
- (id)attribute;
- (id)sqlType;
- (int)externalType;
- (id)initWithProperty:(id)a0;
- (void)setExternalType:(int)a0;

@end
