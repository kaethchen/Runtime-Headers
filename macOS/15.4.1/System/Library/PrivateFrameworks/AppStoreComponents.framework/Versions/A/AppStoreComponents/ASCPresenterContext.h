@class ASCLockupFetcher, ASCArtworkFetcher, ASCAppOfferStateCenter;

@interface ASCPresenterContext : NSObject

@property (class, readonly) ASCPresenterContext *sharedContext;

@property (readonly, nonatomic) ASCArtworkFetcher *artworkFetcher;
@property (readonly, nonatomic) ASCLockupFetcher *lockupFetcher;
@property (readonly, nonatomic) ASCAppOfferStateCenter *appOfferStateCenter;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithArtworkFetcher:(id)a0 lockupFetcher:(id)a1 appOfferStateCenter:(id)a2;

@end
