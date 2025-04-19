@class IOBluetoothHandsFreeAudioGatewayExpansion;

@interface IOBluetoothHandsFreeAudioGateway : IOBluetoothHandsFree

@property (retain) IOBluetoothHandsFreeAudioGatewayExpansion *expansion;
@property BOOL indicatorMode;
@property BOOL indicatorEventReporting;

+ (id)deviceUUID;
+ (id)localUUID;

- (void).cxx_destruct;
- (unsigned int)version;
- (void)setVersion:(unsigned int)a0;
- (unsigned int)productID;
- (unsigned int)vendorID;
- (void)setProductID:(unsigned int)a0;
- (void)setVendorID:(unsigned int)a0;
- (void)sendResponse:(id)a0;
- (int)batteryLevel;
- (void)setBatteryLevel:(int)a0;
- (void)sendInputVolume;
- (void)createIndicator:(id)a0 min:(int)a1 max:(int)a2 currentValue:(int)a3;
- (BOOL)dockState;
- (id)driverID;
- (void)handleSiriAppear;
- (void)handleSiriDisappear;
- (id)initWithDevice:(id)a0 delegate:(id)a1;
- (BOOL)isSiriActive;
- (id)lastUpdatedInputVolume;
- (void)processATCommand:(id)a0;
- (void)processAppleCommand:(id)a0;
- (void)processAppleEvent:(id)a0;
- (void)processEventReporting:(id)a0;
- (void)processIncomingData:(char *)a0 length:(unsigned long long)a1;
- (void)processMicVolumeChange:(int)a0;
- (void)processSpeakerVolumeChange:(int)a0;
- (void)sdpQueryComplete:(id)a0 status:(int)a1;
- (void)sendCurrentStatusValues;
- (void)sendInputVolumePrivate:(id)a0;
- (void)sendOKResponse;
- (void)sendOutputVolume;
- (void)sendOutputVolumePrivate:(id)a0;
- (void)sendResponse:(id)a0 withOK:(BOOL)a1;
- (void)sendStatusMapping;
- (void)sendSupportedFeatures:(int)a0;
- (void)setDockState:(BOOL)a0;
- (void)setFCComplete:(id)a0;
- (void)setIndicator:(id)a0 value:(int)a1;
- (void)setIsSiriActive:(BOOL)a0;
- (void)setLastUpdatedInputVolume:(id)a0;

@end
