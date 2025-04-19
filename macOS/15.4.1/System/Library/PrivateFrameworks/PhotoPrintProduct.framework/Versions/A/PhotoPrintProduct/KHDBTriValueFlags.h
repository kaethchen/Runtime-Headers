@interface KHDBTriValueFlags : NSObject <NSCopying> {
    unsigned int _flagIsSet;
    unsigned int _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setValue:(BOOL)a0 forFlag:(unsigned long long)a1;
- (BOOL)valueForFlag:(unsigned long long)a0;
- (BOOL)knowValueForFlag:(unsigned long long)a0;
- (void)setToUnknownForFlag:(unsigned long long)a0;

@end
