@interface TPHashBuilder : NSObject

@property (nonatomic) long long algo;
@property (nonatomic) BOOL keyed;
@property (nonatomic) struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } ctxSHA256;
@property (nonatomic) struct CC_SHA512state_st { unsigned long long count[2]; unsigned long long hash[8]; unsigned long long wbuf[16]; } ctxSHA512;
@property (nonatomic) struct { unsigned int ctx[96]; } ctxHMAC;

+ (long long)algoOfHash:(id)a0;
+ (id)hashWithAlgo:(long long)a0 ofBytes:(const void *)a1 len:(unsigned long long)a2;
+ (id)hashWithAlgo:(long long)a0 ofData:(id)a1;
+ (id)keyedHashWithAlgo:(long long)a0 key:(id)a1 data:(id)a2;

- (id)init;
- (void)updateWithData:(id)a0;
- (id)finalHash;
- (id)finalKeyedHash;
- (id)initWithAlgo:(long long)a0;
- (id)initWithKeyedAlgo:(long long)a0 key:(id)a1;
- (void)resetWithAlgo:(long long)a0;
- (void)throwInvalidAlgo;
- (void)updateWithBytes:(const void *)a0 len:(unsigned long long)a1;

@end
