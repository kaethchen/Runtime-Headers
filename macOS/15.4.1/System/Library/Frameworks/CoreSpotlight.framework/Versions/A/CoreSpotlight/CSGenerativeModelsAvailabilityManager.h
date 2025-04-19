@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSGenerativeModelsAvailabilityManager : NSObject {
    NSObject<OS_dispatch_queue> *_gmStatusQueue;
    int _gmsNotifyToken;
}

@property (retain) NSDictionary *useCaseStatus;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isPhotosSemanticSearchAvailable;
- (BOOL)isTextPersonExtractionAvailable;
- (BOOL)_isAvailableForUseCaseIdentifiers:(id)a0;
- (BOOL)isSemanticSearchAvailable;

@end
