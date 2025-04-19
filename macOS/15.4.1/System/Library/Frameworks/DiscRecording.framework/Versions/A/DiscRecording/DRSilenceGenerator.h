@interface DRSilenceGenerator : NSObject <DRContentGenerator> {
    unsigned int framesOfSilence;
}

- (BOOL)completed;
- (id)initWithGeneratorInfo:(id)a0;
- (unsigned int)produceIntoBuffer:(char *)a0 length:(unsigned int)a1 blockSize:(unsigned int)a2;

@end
