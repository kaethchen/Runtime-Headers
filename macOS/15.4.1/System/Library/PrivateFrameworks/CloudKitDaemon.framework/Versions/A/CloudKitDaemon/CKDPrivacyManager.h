@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPrivacyManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privacyManagerQueue;
@property (retain, nonatomic) NSMutableSet *operations;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)initInternal;
- (void)_resetPrivacySettingsForAppContainerAccountTuple:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetPrivacySettingsWithCompletionHandler:(id /* block */)a0;

@end
