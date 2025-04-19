@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSAssetAvailabilityNotifierAssistant : NSObject

@property (nonatomic) struct CSAssetAvailabilityNotifierAssistantUpdateContext { unsigned long long state; NSString *bundleIndentifier; NSString *locale; NSString *version; } updateContext;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)_notifyAssetUpdateToLAIfRequired;
- (void)checkInForUpdate:(BOOL)a0;
- (void)checkedInAssetForUpdate:(id)a0;

@end
