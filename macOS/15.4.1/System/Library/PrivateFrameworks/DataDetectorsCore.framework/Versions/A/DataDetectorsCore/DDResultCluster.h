@class NSMutableArray, DDMLResult;

@interface DDResultCluster : NSObject {
    NSMutableArray *_DDResults;
    DDMLResult *_MLResult;
    struct { long long location; long long length; } _DDRange;
}

+ (id)clustersWithDDResults:(id)a0 mlResults:(id)a1;

- (void).cxx_destruct;
- (void)addDDResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)resolvedDDResultFromOriginalQuery:(struct __DDScanQuery { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryFragment *x1; long long x2; long long x3; void /* function */ *x4; void *x5; } *)a0 mlSupportedTypes:(struct __CFArray { } *)a1;
- (void)setMLResult:(id)a0;

@end
