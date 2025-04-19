@interface DRAudioGenerator : NSObject <DRContentGenerator> {
    void *audioProducer;
    unsigned int length;
}

- (BOOL)completed;
- (id)initWithGeneratorInfo:(id)a0;
- (unsigned int)produceIntoBuffer:(char *)a0 length:(unsigned int)a1 blockSize:(unsigned int)a2;

@end
