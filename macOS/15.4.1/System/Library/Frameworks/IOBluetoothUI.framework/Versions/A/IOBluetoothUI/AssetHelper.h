@interface AssetHelper : NSObject

+ (id)findLocalizedStringForKey:(id)a0;
+ (id)findLocalizedStringForKey:(id)a0 default:(id)a1;
+ (id)sharedAssetHelper;

- (id)getDeviceNameForAppleProductID:(unsigned short)a0;
- (id)getImageForAppleProductID:(unsigned short)a0 andColor:(unsigned char)a1;
- (id)getImageURLForAppleProductID:(unsigned short)a0 andColor:(unsigned char)a1;

@end
