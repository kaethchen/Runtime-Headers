@class NSData;

@interface BitVector : NSObject {
    unsigned long long _bitsPerBlock;
    unsigned long long _bitShift;
    char *_data;
}

@property (readonly) long long numberOfBits;
@property (readonly) unsigned long long numberOfBytes;
@property (readonly, copy) NSData *bvData;

- (id)description;
- (void).cxx_destruct;
- (void)loadData:(id)a0;
- (BOOL)testAtIndex:(unsigned long long)a0;
- (id)initWithNumberOfBits:(unsigned long long)a0;
- (void)setAtIndex:(unsigned long long)a0;

@end
