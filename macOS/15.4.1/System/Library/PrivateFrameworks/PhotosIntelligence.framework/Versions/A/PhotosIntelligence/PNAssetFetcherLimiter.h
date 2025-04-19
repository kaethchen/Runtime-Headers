@interface PNAssetFetcherLimiter : NSObject <PNAssetFetcherLimiterWrapper> {
    void /* unknown type, empty encoding */ count;
}

@property (nonatomic, readonly) long long limitType;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ limit;

- (id)init;
- (id)initWithType:(long long)a0 limit:(long long)a1;

@end
