@class BitVector;

@interface BloomFilter : NSObject <NSSecureCoding> {
    BitVector *_bitVector;
    unsigned long long _numberOfBits;
    unsigned long long _numberHashes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int seed;
@property (readonly) unsigned long long expectedNumberOfItems;
@property (readonly) double falsePositiveRate;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)add:(id)a0;
- (BOOL)contains:(id)a0;
- (void)_loadBitVectorData:(id)a0;
- (id)initWithExpectedNumberOfItems:(unsigned long long)a0 falsePositiveRate:(double)a1 seed:(unsigned int)a2;

@end
