@interface PTRandom : NSObject {
    struct mersenne_twister_engine<unsigned int, 32UL, 624UL, 397UL, 31UL, 2567483615U, 11UL, 4294967295U, 7UL, 2636928640U, 15UL, 4022730752U, 18UL, 1812433253U> { unsigned int __x_[624]; unsigned long long __i_; } _mt;
}

+ (void /* unknown type, empty encoding */)nextUshort2:(unsigned int)a0 seed:(unsigned int)a1;

- (id).cxx_construct;
- (id)initWithSeed:(unsigned int)a0;
- (double)nextFloat;
- (double)nextGauss;
- (unsigned int)nextUint:(unsigned int)a0;
- (void /* unknown type, empty encoding */)nextUshort2:(unsigned int)a0;

@end
