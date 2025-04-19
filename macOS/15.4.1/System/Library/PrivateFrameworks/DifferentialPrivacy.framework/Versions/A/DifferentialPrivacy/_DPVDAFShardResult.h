@class NSData, NSArray;

@interface _DPVDAFShardResult : NSObject {
    void /* unknown type, empty encoding */ publicShare;
    void /* unknown type, empty encoding */ inputShares;
    void /* unknown type, empty encoding */ nonce;
}

@property (nonatomic, readonly) NSData *publicShare;
@property (nonatomic, readonly) NSArray *inputShares;
@property (nonatomic, readonly) NSData *nonce;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ dimension;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ chunkLength;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPublicShare:(id)a0 inputShares:(id)a1 nonce:(id)a2 dimension:(long long)a3 chunkLength:(long long)a4;

@end
