@class ICAppearanceInfo;

@interface ICPreviewDeviceInfo : NSObject {
    unsigned long long _hash;
}

@property (nonatomic) double imageSize;
@property (nonatomic) double scale;
@property (retain, nonatomic) ICAppearanceInfo *appearanceInfo;

+ (id)previewDeviceInfoForPreviewImage:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)deviceInfoFromAddingAppearanceInfo:(id)a0;
- (id)initWithImageSize:(double)a0 scale:(double)a1;
- (id)initWithImageSize:(double)a0 scale:(double)a1 appearanceInfo:(id)a2;

@end
