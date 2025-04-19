@interface WiFiUsageLQMMLOSample : WiFiUsageLQMSample

@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned char isMLOPreferredLink;
@property (nonatomic) int band;
@property (nonatomic) unsigned long long channelWidth;
@property (readonly, nonatomic) long long rssi_core0;
@property (readonly, nonatomic) long long rssi_core1;
@property (readonly, nonatomic) long long diff_rssicore1_rssicore0;
@property (nonatomic) unsigned long long idleTimeMs;
@property (nonatomic) unsigned long long idlePortionOfSamplePercentage;
@property (nonatomic) unsigned long long txFramesTotal;
@property (nonatomic) unsigned long long rxUcastFrames;
@property (nonatomic) unsigned long long txRetriesExhaustedOverTxFrames;
@property (nonatomic) unsigned long long txFailsOverTxFrames;
@property (readonly, nonatomic) unsigned long long txRate;
@property (readonly, nonatomic) unsigned long long rxRate;

- (id)asDictionaryInto:(id)a0;
- (id)initWith:(struct apple_mlo_link_lqm { unsigned char x0; struct AppleChannelSpec_t { unsigned char x0 : 8; unsigned char x1 : 3; unsigned char x2 : 3; unsigned char x3 : 2; } x1; struct ether_addr { unsigned char x0[6]; } x2; char x3[2]; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; })a0 andDuration:(unsigned long long)a1;

@end
