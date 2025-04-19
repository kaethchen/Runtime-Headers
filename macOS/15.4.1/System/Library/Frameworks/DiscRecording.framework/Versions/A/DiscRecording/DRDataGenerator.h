@class NSString, NSFileHandle;

@interface DRDataGenerator : NSObject <DRContentGenerator> {
    NSString *path;
    NSFileHandle *fd;
    unsigned int length;
}

- (void)dealloc;
- (void)finalize;
- (BOOL)completed;
- (id)initWithGeneratorInfo:(id)a0;
- (unsigned int)produceIntoBuffer:(char *)a0 length:(unsigned int)a1 blockSize:(unsigned int)a2;

@end
