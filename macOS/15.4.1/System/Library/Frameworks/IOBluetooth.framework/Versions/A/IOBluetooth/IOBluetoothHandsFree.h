@class IOBluetoothRFCOMMChannel, IOBluetoothHandsFreeExpansion, IOBluetoothUserNotification, NSDate, IOBluetoothDevice, NSMutableArray;
@protocol IOBluetoothHandsFreeDelegate;

@interface IOBluetoothHandsFree : NSObject {
    void *_reserved1;
    IOBluetoothHandsFreeExpansion *_reserved;
}

@property (retain, nonatomic) IOBluetoothRFCOMMChannel *rfcommChannel;
@property (retain) IOBluetoothUserNotification *rfcommChannelNotification;
@property float previousInputVolume;
@property float previousOutputVolume;
@property BOOL previousOutputMuted;
@property (retain) NSDate *lastUpdatedInputVolume;
@property (retain) NSDate *lastUpdatedOutputVolume;
@property (retain, nonatomic) IOBluetoothDevice *device;
@property unsigned char deviceRFCOMMChannelID;
@property unsigned int deviceSupportedFeatures;
@property unsigned int deviceSupportedSMSServices;
@property unsigned int deviceCallHoldModes;
@property unsigned short SCOConnectionHandle;
@property unsigned char codecID;
@property (retain) NSMutableArray *statusIndicators;
@property unsigned long long SMSMode;
@property (getter=isSMSEnabled) BOOL SMSEnabled;
@property (nonatomic) int handsFreeState;
@property BOOL connectSCOAfterSLCConnected;
@property BOOL disconnectAfterDisconnectingSCO;
@property BOOL xaplSent;
@property unsigned int supportedFeatures;
@property float inputVolume;
@property (getter=isInputMuted) BOOL inputMuted;
@property float outputVolume;
@property (getter=isOutputMuted) BOOL outputMuted;
@property id<IOBluetoothHandsFreeDelegate> delegate;
@property (readonly, getter=isConnected) BOOL connected;

+ (void)initialize;
+ (id)deviceUUID;
+ (unsigned char)rfcommChannelID;
+ (id)localServiceRecord;
+ (id)localUUID;

- (void)dealloc;
- (void).cxx_destruct;
- (void)disconnect;
- (void)connect;
- (unsigned int)outputDeviceID;
- (id)encodeUserData:(id)a0;
- (id)decodeUserData:(long long)a0 userData:(id)a1 length:(unsigned int)a2;
- (void)sendInputVolume;
- (void)addAudioListeners;
- (void)connectSCO;
- (void)createIndicator:(id)a0 min:(int)a1 max:(int)a2 currentValue:(int)a3;
- (id)decodeNumber:(id)a0 isSCA:(BOOL)a1 type:(unsigned int *)a2;
- (id)decodePDU:(id)a0;
- (id)deviceServiceRecord;
- (void)disconnectSCO;
- (id)driverID;
- (id)encodeNumber:(id)a0;
- (id)encodePDU:(id)a0 message:(id)a1;
- (void)handleDeviceDisconnectedNotification:(id)a0;
- (void)handleIncomingRFCOMMChannelOpened:(id)a0 channel:(id)a1;
- (BOOL)hasData:(id)a0;
- (int)indicator:(id)a0;
- (id)indicatorDictionary:(id)a0;
- (id)initWithDevice:(id)a0 delegate:(id)a1;
- (unsigned int)inputDeviceID;
- (BOOL)isSCOConnected;
- (void)openRFCOMMChannel;
- (id)parseList:(id)a0;
- (void)processIncomingData:(char *)a0 length:(unsigned long long)a1;
- (unsigned int)readOctet:(id)a0;
- (void)removeAudioListeners;
- (void)rfcommChannelClosed:(id)a0;
- (void)rfcommChannelData:(id)a0 data:(void *)a1 length:(unsigned long long)a2;
- (void)rfcommChannelOpenComplete:(id)a0 status:(int)a1;
- (void)sdpQueryComplete:(id)a0 status:(int)a1;
- (void)sendOutputVolume;
- (void)setFCComplete:(id)a0;
- (void)setIndicator:(id)a0 value:(int)a1;
- (id)stripParenthesis:(id)a0;

@end
