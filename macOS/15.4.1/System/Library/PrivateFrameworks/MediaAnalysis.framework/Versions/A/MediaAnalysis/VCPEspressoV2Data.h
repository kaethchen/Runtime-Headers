@interface VCPEspressoV2Data : NSObject {
    void *_dataPtr;
    BOOL _allocated;
}

@property (readonly) long long tensorType;
@property (readonly) unsigned long long tensorSize;

- (void)dealloc;
- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (void *)getData:(unsigned long long)a0;
- (void)copyDataFrom:(void *)a0 srcStart:(unsigned long long)a1 dstStart:(unsigned long long)a2 length:(unsigned long long)a3;
- (id)initWithTensorType:(unsigned long long)a0 size:(unsigned long long)a1;
- (id)initWithTensorType:(unsigned long long)a0 size:(unsigned long long)a1 dataPtr:(void *)a2;
- (void)setData:(id)a0 padding:(id)a1;
- (void)setValueFP:(float)a0 atIndex:(unsigned long long)a1;

@end
