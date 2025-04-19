@class NSArray, NSString, NSMutableArray;

@interface IOBluetoothDeviceInquiry : NSObject <IOBluetoothCoreBluetoothCoordinatorDelegate> {
    void *_nameRequestHintType;
    struct IOBluetoothDeviceSearchAttributes { unsigned int x0; unsigned int x1; unsigned int x2; struct IOBluetoothDeviceSearchDeviceAttributes *x3; } *_searchAttributes;
    void *_deviceAttributes;
    id _mReserved;
    id _mUnused000;
    id _mUnused001;
    id _mUnused002;
    unsigned int _serviceClassMajor;
    unsigned int _deviceClassMajor;
    unsigned int _deviceClassMinor;
    NSMutableArray *_deviceResults;
    NSMutableArray *_devicesPendingNames;
    unsigned char _currentActivity;
    BOOL _remoteNameRequestInProgress;
    BOOL _aborted;
}

@property (nonatomic) BOOL searchesUntilCancelled;
@property (nonatomic) BOOL returnDuplicates;
@property unsigned char inquiryMaxResults;
@property char rssiThreshold;
@property (copy) NSArray *searchUUIDs;
@property id delegate;
@property unsigned char inquiryLength;
@property unsigned int searchType;
@property BOOL updateNewDeviceNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inquiryWithDelegate:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (int)start;
- (void)setCurrentActivity:(unsigned char)a0;
- (int)stop;
- (int)abort;
- (id)foundDevices;
- (void)setNameRequestPriorityHintType:(unsigned int)a0;
- (void)addInquiryResult:(id)a0;
- (int)addInquiryToDaemon;
- (void)clearFoundDevices;
- (oneway void)deviceFound:(in id)a0 classOfDevice:(unsigned int)a1 rssi:(char)a2 eirDictionary:(id)a3;
- (void)deviceInquiryNameRequestUpdateStarted:(in id)a0 devicesRemaining:(int)a1;
- (void)deviceInquiryStarted;
- (void)deviceInquiryUpdatingDeviceNamesStarted:(int)a0;
- (void)deviceNameUpdated:(in id)a0 devicesRemaining:(int)a1;
- (oneway void)inquiryComplete:(unsigned char)a0;
- (void)inquiryStateChanged:(BOOL)a0;
- (void)peerDiscovered:(id)a0 withResults:(id)a1;
- (void)peerUpdated:(id)a0 withResults:(id)a1;
- (int)removeInquiryFromDaemon;
- (struct IOBluetoothDeviceSearchAttributes { unsigned int x0; unsigned int x1; unsigned int x2; struct IOBluetoothDeviceSearchDeviceAttributes *x3; } *)searchAttributes;
- (void)setSearchAttributes:(const struct IOBluetoothDeviceSearchAttributes { unsigned int x0; unsigned int x1; unsigned int x2; struct IOBluetoothDeviceSearchDeviceAttributes *x3; } *)a0;
- (void)setSearchCriteria:(unsigned int)a0 majorDeviceClass:(unsigned int)a1 minorDeviceClass:(unsigned int)a2;
- (int)startInquiryInDaemon;
- (void)stopInquiryInDaemon;
- (void)updateDaemonInquiryAttributes;

@end
