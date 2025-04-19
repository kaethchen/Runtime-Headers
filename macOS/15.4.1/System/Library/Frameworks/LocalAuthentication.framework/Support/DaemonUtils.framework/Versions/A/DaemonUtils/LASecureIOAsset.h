@class NSData, NSString;

@interface LASecureIOAsset : NSObject

@property long long x;
@property long long y;
@property long long width;
@property long long height;
@property long long type;
@property long long action;
@property long long format;
@property BOOL disabled;
@property (retain) NSData *image;
@property (retain) NSString *assetCatalogImageKey;
@property (retain) NSData *buttonDisabled;
@property (retain) NSData *buttonUnpressed;
@property (retain) NSData *buttonPressed;
@property (retain) NSString *assetCatalogButtonDisabledKey;
@property (retain) NSString *assetCatalogButtonUnpressedKey;
@property (retain) NSString *assetCatalogButtonPressedKey;
@property (retain) NSString *name;
@property (retain) NSString *renderedText;
@property (retain) NSString *remoteAssetKey;

+ (id)asset;
+ (id)stringFromLASIOAssetButtonAction:(long long)a0;
+ (id)stringFromLASIOAssetFormat:(long long)a0;
+ (id)stringFromLASIOAssetType:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)dictionary;

@end
