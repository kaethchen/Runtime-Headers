@class NSMutableDictionary;

@interface CBAssetHelper : NSObject {
    NSMutableDictionary *mDictCache;
}

+ (id)consoleUserName;
+ (id)findLocalizedStringForKey:(id)a0;
+ (id)findLocalizedStringForKey:(id)a0 default:(id)a1;
+ (id)loadImageFromBundle:(id)a0 withResourceNamed:(id)a1;
+ (id)sharedAssetHelper;
+ (id)strFromColorID:(unsigned char)a0;
+ (id)getAssetPathsFilenames;
+ (id)loadAllAssets;
+ (id)loadAssetsFromFile:(id)a0;
+ (id)resourcePathFromBundle:(id)a0 withResourceNamed:(id)a1;
+ (id)strFromProductID:(unsigned short)a0;
+ (id)strFromVendorID:(unsigned short)a0 andProductID:(unsigned short)a1;

- (id)init;
- (void).cxx_destruct;
- (id)getDeviceNameForAppleProductID:(unsigned short)a0;
- (id)getImageForAppleProductID:(unsigned short)a0 andColor:(unsigned char)a1;
- (id)getImageURLForAppleProductID:(unsigned short)a0 andColor:(unsigned char)a1;
- (id)getAssetDictForAppleProductID:(unsigned short)a0;
- (id)getCustomInfoForVID:(unsigned short)a0 andPID:(unsigned short)a1;
- (id)getDeviceDisplayName:(unsigned short)a0;

@end
