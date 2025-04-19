@class IOBluetoothRFCOMMChannel, NSTimer, NSMutableData, IOBluetoothDevice;

@interface IOBluetoothDeviceInfoGatherer : NSObject {
    BOOL mInfoGathered;
    IOBluetoothDevice *mDevice;
    IOBluetoothRFCOMMChannel *mRFCOMMChannel;
    unsigned int mATCommandState;
    unsigned char mChannelID;
    NSMutableData *mPhoneGMI;
    NSMutableData *mPhoneGMM;
    NSMutableData *mPhoneManufacturer;
    NSMutableData *mPhoneModelNumber;
    NSMutableData *mPhoneRevisionID;
    NSMutableData *mPhoneIMSI;
    NSTimer *mATCommandTimer;
    char *mLastCommandPtr;
    SEL mProgressSelector;
    id mProgressSelectorTarget;
    BOOL mGetATCommandInfo;
    BOOL mGetSDPInfo;
    void *expansionData[4];
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)clearAllData;
- (void)connectionComplete:(id)a0 status:(int)a1;
- (id)getManufacturer;
- (void)ATCommandTimerFired;
- (id)getIMSI;
- (void)deviceInfoGatheringComplete;
- (id)getModelNumber;
- (id)getPhoneGMI;
- (id)getPhoneGMM;
- (id)getRevision;
- (id)initWithDevice:(id)a0 progressSelector:(SEL)a1 andTarget:(id)a2;
- (void)postProgressToTarget:(int)a0;
- (void)processNextPhoneQuery;
- (void)rfcommChannelClosed:(id)a0;
- (void)rfcommChannelData:(id)a0 data:(void *)a1 length:(unsigned long long)a2;
- (void)rfcommChannelOpenComplete:(id)a0 status:(int)a1;
- (void)sdpQueryComplete:(id)a0 status:(int)a1;
- (void)setGetATCommandInfo:(BOOL)a0;
- (void)setGetSDPInfo:(BOOL)a0;
- (void)setOnlyGetSDPInfo:(BOOL)a0;
- (void)setProgressSelector:(SEL)a0 andTarget:(id)a1;
- (void)startATCommandTimeout;
- (void)startDeviceInfoGathering;
- (void)startDeviceInfoGatheringDelayed:(id)a0;
- (void)startSDPQuery;
- (void)stopATCommandTimeout;

@end
