@interface SGAsset : NSObject

+ (id)asset;
+ (id)notificationQueue;
+ (void)downloadMetadataWithCompletion:(id /* block */)a0;
+ (id)localeAsset;
+ (id)localeAssetIdentifier;

@end
