@class NSArray, BWFigCaptureDevice, NSMutableSet, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface BWFigCaptureDeviceVendorDeviceState : NSObject

@property (readonly, nonatomic) BWFigCaptureDevice *device;
@property (readonly, nonatomic) struct OpaqueFigCaptureDevice { } *figCaptureDevice;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *deviceCloseTimer;
@property (nonatomic) int deviceUsageCount;
@property (nonatomic) BOOL inUseForPublishing;
@property (nonatomic) BOOL inUseForVibeMitigation;
@property (nonatomic) int takeBackDeviceCalledForActiveClientID;
@property (readonly, nonatomic) NSMutableArray *controlledStreams;
@property (readonly, nonatomic) NSMutableArray *streamsToKeepControlled;
@property (readonly, nonatomic) NSMutableArray *streamsInUse;
@property (readonly, nonatomic) NSMutableArray *streamsControlledByOtherClients;
@property (retain, nonatomic) NSMutableArray *portTypesAllowingStreamControlLoss;
@property (readonly, nonatomic) NSArray *streamsRequiringControlControlledByOtherClients;
@property (readonly, nonatomic) NSMutableSet *portTypesToCheckForToFAFEstimator;
@property (readonly, nonatomic) NSMutableDictionary *tofAFEstimatorResultsByPortType;
@property (readonly, nonatomic) NSMutableDictionary *tofAFEstimatorClientApplicationIDByPortType;
@property (readonly, nonatomic) NSMutableDictionary *tofAFEstimatorResultsStreamingTimeByPortType;
@property (readonly, nonatomic) NSMutableSet *portTypesToCheckForAFDriverShortStatistics;
@property (readonly, nonatomic) NSMutableDictionary *afDriverShortStatisticsByPortType;
@property (nonatomic) BOOL shutDownDueToSystemPressure;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithDevice:(id)a0 figCaptureDevice:(struct OpaqueFigCaptureDevice { } *)a1;

@end
