@class NSString, RPCompanionLinkClient;

@interface MRRapportTransportConnection : MRExternalDeviceTransportConnection <MRExternalDeviceTransportConnectionDataSource>

@property (readonly, nonatomic) NSString *sessionUID;
@property (readonly, nonatomic) NSString *eventID;
@property (retain, nonatomic) RPCompanionLinkClient *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isValid;
- (void).cxx_destruct;
- (id)runLoop;
- (void)closeWithError:(id)a0;
- (void)_registerCallbacks;
- (BOOL)_targetDeviceMatch:(id)a0 deviceUID:(id)a1;
- (id)initWithCompanionLinkClient:(id)a0 device:(id)a1 sessionUID:(id)a2;
- (id)initWithDeviceUID:(id)a0 sessionUID:(id)a1 targetDevice:(id *)a2 error:(id *)a3;
- (unsigned long long)sendTransportData:(id)a0 options:(id)a1;
- (void)setRunLoop:(id)a0;
- (long long)transportTypeForTransport:(id)a0;

@end
