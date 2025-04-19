@interface IOBluetoothHeadsetAudioGateway : IOBluetoothHandsFreeAudioGateway

+ (id)deviceUUID;
+ (id)localUUID;

- (id)initWithDevice:(id)a0 delegate:(id)a1;
- (void)processATCommand:(id)a0;
- (void)setHandsFreeState:(int)a0;
- (void)setIndicator:(id)a0 value:(int)a1;

@end
