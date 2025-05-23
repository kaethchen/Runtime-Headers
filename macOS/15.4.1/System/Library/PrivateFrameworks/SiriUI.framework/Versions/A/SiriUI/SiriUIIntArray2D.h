@interface SiriUIIntArray2D : NSObject {
    long long *_arrayData;
}

@property (readonly, nonatomic) unsigned long long iSize;
@property (readonly, nonatomic) unsigned long long jSize;
@property (nonatomic) BOOL shouldBoundsCheck;

+ (id)arrayWithISize:(unsigned long long)a0 jSize:(unsigned long long)a1;

- (void)dealloc;
- (id)description;
- (void)assertBoundsForIIndex:(unsigned long long)a0 jIndex:(unsigned long long)a1;
- (BOOL)inBoundsForIIndex:(unsigned long long)a0 jIndex:(unsigned long long)a1;
- (id)initWithISize:(unsigned long long)a0 jSize:(unsigned long long)a1;
- (void)setValueAtIIndex:(unsigned long long)a0 jIndex:(unsigned long long)a1 newValue:(long long)a2;
- (long long)valueAtIIndex:(unsigned long long)a0 jIndex:(unsigned long long)a1;
- (long long)valueAtIIndex:(unsigned long long)a0 jIndex:(unsigned long long)a1 outOfBoundsReturnValue:(long long)a2;

@end
