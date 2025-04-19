@interface MPSParallelRandomMTGP32State : NSObject <NSCopying, NSSecureCoding> {
    unsigned int *_state;
    struct { unsigned int *shift1; unsigned int *shift2; void *mR; void *mT; unsigned int *M; unsigned int *stateIdx; unsigned int maxGenerators; } _stateParams;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSeed:(unsigned long long)a0;

@end
