@class NSMutableDictionary;

@interface IOBluetoothDeviceImageVault : NSObject {
    NSMutableDictionary *mImageMajorDict;
    NSMutableDictionary *mMacImageMajorDict;
}

+ (id)imageForSystemIconType:(unsigned int)a0 ofSize:(struct CGSize { double x0; double x1; })a1;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)imageForDevice:(id)a0 forMacTarget:(BOOL)a1;
- (id)imageForMajorDeviceClass:(unsigned int)a0 minorDeviceClass:(unsigned int)a1 forMacTarget:(BOOL)a2;
- (id)imageForModelString:(id)a0;
- (void)initImageDictionaries;
- (void)loadResourcesForDict:(id)a0;
- (id)stockImageForDevice:(id)a0;

@end
