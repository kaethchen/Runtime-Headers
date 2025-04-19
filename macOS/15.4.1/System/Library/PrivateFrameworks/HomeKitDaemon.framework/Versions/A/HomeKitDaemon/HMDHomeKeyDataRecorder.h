@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMDHomeKeyDataRecorder : HMFObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSMutableArray *mutableRecords;
@property (readonly, copy) NSArray *records;

+ (id)sharedRecorder;

- (id)init;
- (void).cxx_destruct;
- (void)addRecord:(id)a0 clearPrevious:(BOOL)a1;
- (void)recordAddedWalletKey:(id)a0;
- (void)recordAddedWalletKey:(id)a0 passJSONDict:(id)a1;
- (void)recordInitialWalletKeys:(id)a0;
- (void)recordRemovedWalletKeyWithSerialNumber:(id)a0 noWalletKeysRemaining:(BOOL)a1;
- (void)recordUpdatedWalletKey:(id)a0;
- (void)recordUpdatedWalletKey:(id)a0 passJSONDict:(id)a1;

@end
