@interface MSRHDRProcessingT5 : MSRHDRProcessingT4

- (id)init;
- (void)getDegammaLutInput:(float *)a0;
- (unsigned long long)getDegammaLutSize;
- (void)getRegammaLutInput:(float *)a0;
- (unsigned long long)getRegammaLutSize;
- (void)setupHardwareConfigUnit;

@end
