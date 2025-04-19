@interface SRNet : VEEspressoModel

@property (nonatomic) BOOL useMPS;

- (int)bindBuffer:(struct __CVBuffer { } *)a0 forBlob:(const char *)a1;
- (id)initWithUsage:(long long)a0 espressoFileName:(id)a1 useMPS:(BOOL)a2;
- (BOOL)scaleLowResolutionFrame:(struct __CVBuffer { } *)a0 withPrevHighResolutionFrame:(struct __CVBuffer { } *)a1 to:(struct __CVBuffer { } *)a2 callback:(id /* block */)a3;

@end
