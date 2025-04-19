@class NSString;

@interface DDMLResult : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (copy, nonatomic) NSString *matchedString;
@property (nonatomic) int classification;
@property (nonatomic) double confidence;

+ (BOOL)shouldKeepResultOfType:(id)a0;

- (id)debugDescription;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)ddResultFromQuery:(struct __DDScanQuery { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryFragment *x1; long long x2; long long x3; void /* function */ *x4; void *x5; } *)a0;
- (id)initWithText:(id)a0 resultRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 confidence:(double)a2 resultType:(int)a3;

@end
