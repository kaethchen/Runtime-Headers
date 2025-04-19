@class NSURL, UARPSuperBinaryAsset, NSMutableArray;

@interface UARPDynamicAssetAnalyticsEvent : NSObject {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_events;
}

+ (id)tag;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)send;
- (BOOL)decomposeUARP;

@end
