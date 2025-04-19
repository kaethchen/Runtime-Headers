@class NSString, CBProductInfo;

@interface HeadphoneManager.HeadphoneReplayDevice : HPMHeadphoneDevice {
    void /* unknown type, empty encoding */ replayDevice;
    void /* unknown type, empty encoding */ listeners;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned int accessorySettingFeatureBitMask;
@property (nonatomic) unsigned int deviceColor;
@property (nonatomic, retain) CBProductInfo *productInfo;
@property (nonatomic) float batteryLevelMain;
@property (nonatomic) float batteryLevelCase;
@property (nonatomic) float batteryLevelLeft;
@property (nonatomic) float batteryLevelRight;

- (void).cxx_destruct;
- (BOOL)isServiceSupported:(unsigned int)a0;

@end
