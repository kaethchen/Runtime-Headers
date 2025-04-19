@class NSString;
@protocol ASDTExclavesStatusTrackerHostProtocol;

@interface ASDTExclavesStatusProperty : ASDTCustomProperty <ASDTConcreteCustomProperty>

@property (retain, nonatomic) NSString *sensorName;
@property (retain, nonatomic) id<ASDTExclavesStatusTrackerHostProtocol> statusTrackerHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configForMic;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)addedToDevice:(id)a0;
- (id)retrievePropertyValue;
- (void)sensorStatusChanged;

@end
