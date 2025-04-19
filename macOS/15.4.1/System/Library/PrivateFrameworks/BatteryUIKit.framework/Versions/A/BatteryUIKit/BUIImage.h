@class NSImage, NSBundle, NSObject;
@protocol OS_dispatch_queue;

@interface BUIImage : NSObject

@property (retain) NSImage *splitBatteryEndImage;
@property (retain) NSImage *splitBatteryHeadImage;
@property (retain) NSImage *splitBatteryStretchImage;
@property (retain) NSImage *batLevelBlackCapLeftImage;
@property (retain) NSImage *batLevelBlackCapRightImage;
@property (retain) NSImage *batLevelBlackMiddleImage;
@property (retain) NSImage *batLevelRedCapLeftImage;
@property (retain) NSImage *batLevelRedCapRightImage;
@property (retain) NSImage *batLevelRedMiddleImage;
@property (retain) NSBundle *bundle;
@property (readonly) NSImage *noBatteriesImage;
@property (readonly) NSImage *batteryChargedImage;
@property (readonly) NSImage *batteryChargingImage;
@property (readonly) NSImage *badBatteryImage;
@property (readonly) NSImage *emptyBatteryImage;
@property (readonly) NSImage *batteryChimeOutline;
@property (readonly) NSImage *batteryChimeFill;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)batteryImagesForParameters:(id)a0;
+ (struct CGSize { double x0; double x1; })imageSizeForParameters:(id)a0;
+ (id)sharedBUIImageCache;

- (void).cxx_destruct;
- (id)badBatteryImage;
- (id)_imagesForBattery:(id)a0;
- (id)batteryChargedImage;
- (id)batteryChargingImage;
- (id)getJuiceMaxWidth:(unsigned long long)a0 percentCharged:(double)a1 colorCode:(int)a2 opacity:(double)a3;
- (id)getPowerChimeJuiceForPercent:(double)a0 colorCode:(int)a1 opacity:(double)a2;
- (void)loadBlackFillImages;
- (void)loadRedFillImages;
- (id)noBatteriesImage;
- (id)tintImage:(id)a0 withColor:(id)a1;

@end
