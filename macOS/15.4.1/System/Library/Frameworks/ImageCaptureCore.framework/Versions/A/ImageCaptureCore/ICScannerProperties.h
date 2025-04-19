@class NSArray, NSString, NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ICScannerProperties : NSObject

@property (retain) NSArray *devicePreferredResolutions;
@property (retain) NSArray *availableFunctionalUnitTypes;
@property (retain) id selectedFunctionalUnit;
@property (retain) id lastSelectedFunctionalUnit;
@property unsigned long long transferMode;
@property (retain) NSURL *downloadsDirectory;
@property (copy) NSString *documentName;
@property (copy) NSString *documentUTI;
@property (copy) NSString *defaultUsername;
@property BOOL scanCanceled;
@property BOOL supportsICARawFileFormat;
@property (retain) NSMutableDictionary *scanContext;
@property BOOL requestedToCancelScan;
@property BOOL scanParamsRetained;
@property unsigned int maxMemoryBandSize;
@property BOOL numOpenSessionRetries;
@property BOOL available;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;

- (void)dealloc;
- (void).cxx_destruct;

@end
