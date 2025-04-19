@class NSString, NSData;

@interface _RMSNowPlayingArtworkCacheItem : NSObject <NSDiscardableContent> {
    BOOL _keepAlive;
}

@property (retain, nonatomic) NSString *artworkIdentifier;
@property (retain, nonatomic) NSData *artworkData;

- (void).cxx_destruct;
- (BOOL)beginContentAccess;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (BOOL)isContentDiscarded;

@end
