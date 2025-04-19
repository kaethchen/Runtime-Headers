@class ASEProcessingT0;

@interface ASEProcessing : NSObject {
    ASEProcessingT0 *_ase;
}

@property (nonatomic) float enhancementStrength;
@property (nonatomic) unsigned int destinationWidth;
@property (nonatomic) unsigned int destinationHeight;

+ (BOOL)shouldEnhanceWidth:(unsigned int)a0 height:(unsigned int)a1 destinationWidth:(unsigned int)a2 destinationHeight:(unsigned int)a3;
+ (BOOL)shouldEnhanceWidth:(unsigned int)a0 height:(unsigned int)a1 destinationWidth:(unsigned int)a2 destinationHeight:(unsigned int)a3 fps:(float)a4;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfig:(const struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0;
- (long long)processFrameWithInput:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15[8]; unsigned int x16[8]; unsigned int x17[8]; unsigned int x18[8]; unsigned int x19[16]; unsigned int x20[16]; unsigned int x21[16]; } *)a0 outputData:(id *)a1;
- (long long)processFrameWithInput:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15[8]; unsigned int x16[8]; unsigned int x17[8]; unsigned int x18[8]; unsigned int x19[16]; unsigned int x20[16]; unsigned int x21[16]; } *)a0 callback:(id /* block */)a1;
- (unsigned int)getDestinationHeight;
- (unsigned int)getDestinationWidth;
- (float)getEnhancementStrength;
- (long long)processFrameWithInput:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15[8]; unsigned int x16[8]; unsigned int x17[8]; unsigned int x18[8]; unsigned int x19[16]; unsigned int x20[16]; unsigned int x21[16]; } *)a0 Output:(struct { union { struct { int x0; unsigned int x1; BOOL x2; union { struct { BOOL x0; unsigned int x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; } x2; struct { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; struct { float x0; float x1; float x2; } x4; struct { float x0; float x1; float x2; } x5; struct { float x0; float x1; float x2; } x6; struct { float x0; float x1; float x2; } x7; } x3; struct { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; struct { float x0; float x1; float x2; } x4; struct { float x0; float x1; float x2; } x5; struct { float x0; float x1; float x2; } x6; struct { float x0; float x1; float x2; } x7; } x4; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } x5; struct { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; struct { float x0; float x1; float x2; } x4; struct { float x0; float x1; float x2; } x5; struct { float x0; float x1; float x2; } x6; struct { float x0; float x1; float x2; } x7; } x6; struct { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; struct { float x0; float x1; float x2; } x4; struct { float x0; float x1; float x2; } x5; struct { float x0; float x1; float x2; } x6; struct { float x0; float x1; float x2; } x7; } x7; struct { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; struct { float x0; float x1; float x2; } x4; struct { float x0; float x1; float x2; } x5; struct { float x0; float x1; float x2; } x6; struct { float x0; float x1; float x2; } x7; } x8; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x9; struct { struct { unsigned int x0; unsigned int x1; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; } x1; } x10; } x0; } x3; } x0; } x0; } *)a1;

@end
