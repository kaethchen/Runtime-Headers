@class NSString, NSXPCConnection, NSUUID, IOBluetoothL2CAPChannel, NSObject;
@protocol OS_dispatch_semaphore;

@interface IOBluetoothDeviceExpansion : NSObject {
    unsigned char batteryPercentSingle;
    unsigned char batteryPercentLeft;
    unsigned char batteryPercentRight;
    unsigned char batteryPercentCase;
    unsigned char batteryPercentCombined;
    NSObject<OS_dispatch_semaphore> *connectedSemaphore;
}

@property (retain) IOBluetoothL2CAPChannel *channelBeingOpened;
@property (retain) id openConnectionTarget;
@property (retain) id remoteNameRequestTarget;
@property unsigned short manufacturerName;
@property unsigned char lmpVersion;
@property unsigned short lmpSubversion;
@property unsigned short psm;
@property char inquiryRSSI;
@property unsigned char addressType;
@property BOOL authenticationRequired;
@property BOOL findExisting;
@property BOOL authenticationRetried;
@property BOOL lowEnergyDevice;
@property BOOL connecting;
@property BOOL nameComplete;
@property BOOL connectionRetried;
@property long long headsetBatteryPercent;
@property BOOL lowEnergyDeviceHID2;
@property BOOL lowEnergyKeyboard;
@property BOOL lowEnergyPointer;
@property unsigned int serviceMask;
@property unsigned char capabilityMask;
@property unsigned char batteryPercentSingle;
@property unsigned char batteryPercentLeft;
@property unsigned char batteryPercentRight;
@property unsigned char batteryPercentCase;
@property unsigned char batteryPercentCombined;
@property BOOL isFirstPairing;
@property BOOL inEarDetect;
@property BOOL inEar;
@property unsigned char primaryInEar;
@property unsigned char secondaryInEar;
@property unsigned char micMode;
@property unsigned char buttonMode;
@property unsigned char leftDoubleTap;
@property unsigned char rightDoubleTap;
@property unsigned char primaryBud;
@property BOOL isDevFused;
@property unsigned char listeningMode;
@property BOOL switchControlEnabled;
@property BOOL heySiriEnabled;
@property (retain) NSString *accessoryFWVersion;
@property unsigned char singleClickMode;
@property unsigned char doubleClickMode;
@property unsigned char leftClickHoldMode;
@property unsigned char rightClickHoldMode;
@property unsigned int listeningModeConfigs;
@property unsigned char crownRotationDirection;
@property int autoAnswerCalls;
@property unsigned short listeningServices;
@property int isSmartRoutingEnabled;
@property BOOL isAutoRoutingEnabled;
@property unsigned char streamingState;
@property (retain) NSXPCConnection *xpcConnection;
@property (retain) id mTarget;
@property NSUUID *identifier;
@property (retain) NSObject<OS_dispatch_semaphore> *connectedSemaphore;

- (void).cxx_destruct;

@end
