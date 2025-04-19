@interface _PASRng : NSObject {
    struct { unsigned long long s[2]; } _state;
}

- (id)init;
- (unsigned long long)next;
- (id)initWithSeed:(unsigned long long)a0;
- (double)nextDouble;
- (float)nextFloat;

@end
