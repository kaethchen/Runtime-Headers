@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SecureMobileAssetMountManager : NSObject

@property (retain) NSMutableSet *volumesToDissent;
@property (retain) NSObject<OS_dispatch_queue> *daQueue;
@property struct __DASession { } *daSession;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_canonicalizeBSDName:(id)a0;
- (BOOL)_shouldDissentUnmount:(id)a0;
- (void)registerDissenterForVolume:(id)a0;
- (void)unregisterDissenterForVolume:(id)a0;

@end
