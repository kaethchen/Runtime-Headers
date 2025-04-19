@class NSString, NSArray, IOBTEASession, IOBluetoothL2CAPChannel, IOBluetoothDevice;
@protocol AAPDelegate;

@interface AAP : NSObject <IOBluetoothL2CAPChannelDelegate> {
    IOBTEASession *eaSessions[32];
}

@property (retain) IOBluetoothDevice *device;
@property (retain, nonatomic) IOBluetoothL2CAPChannel *L2CAPChannel;
@property id<AAPDelegate> delegate;
@property BOOL firstPairing;
@property (nonatomic) unsigned int version;
@property (retain) NSString *AACPConnectionUUID;
@property BOOL crashLogDetected;
@property (copy) NSArray *crashLogFiles;

- (void).cxx_destruct;

@end
