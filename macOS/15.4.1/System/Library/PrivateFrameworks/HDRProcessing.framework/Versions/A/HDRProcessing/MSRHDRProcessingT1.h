@interface MSRHDRProcessingT1 : MSRHDRProcessing

- (void)dumpMmrConfig;
- (void)getDegammaLutInput:(float *)a0;
- (unsigned long long)getDegammaLutSize;
- (void)setupHardwareConfigUnit;

@end
