@class NSArray, NSURL, UARPSuperBinaryAsset, NSMutableArray;

@interface UARPDynamicAssetVersions : NSObject {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_serialNumbers;
}

@property (readonly) NSArray *partnerSerialNumbers;

+ (id)tag;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (BOOL)decomposeUARP;

@end
