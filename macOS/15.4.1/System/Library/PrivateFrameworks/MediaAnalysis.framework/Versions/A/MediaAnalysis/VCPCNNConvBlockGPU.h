@class MPSCNNConvolution;

@interface VCPCNNConvBlockGPU : VCPCNNConvBlock {
    float *_batchNormMean;
    float *_batchNormVar;
    float *_batchNormGamma;
    float *_batchNormBeta;
    MPSCNNConvolution *_mpsConv;
}

- (void)dealloc;
- (void).cxx_destruct;
- (int)forward;
- (int)readBatchNormParam:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 quantFactor:(short)a1;
- (int)fillConvWeightsGPU;
- (int)gpuForward;
- (int)readFromDisk:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 quantFactor:(short)a1;
- (void)releaseBatchNormMemory;

@end
