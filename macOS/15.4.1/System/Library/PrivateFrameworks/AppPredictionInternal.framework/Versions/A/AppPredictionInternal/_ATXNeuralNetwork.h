@class NSData;

@interface _ATXNeuralNetwork : NSObject {
    NSData *_data;
    const char *_dataBytes;
    unsigned long long _nlayers;
    const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; } *_layers;
}

@property (readonly, nonatomic) unsigned long long inputSize;
@property (readonly, nonatomic) unsigned long long outputSize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (double)predict:(const double *)a0;
- (double)_predict:(float *)a0 freeInputsAfterUse:(BOOL)a1;
- (void)forInputs:(const float *)a0 computeOutputLayer:(float *)a1;
- (float *)_runOnInputs:(float *)a0 freeInputsAfterUse:(BOOL)a1;
- (double)predict32:(const float *)a0;

@end
