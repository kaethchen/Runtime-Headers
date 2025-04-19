@class NSString, ODNode, SPMVolumeObserver, NSHashTable, NSArray, NSObject, NSData;
@protocol OS_dispatch_queue;

@interface SPMSharePointManager : NSObject <SPMVolumeObserverDelegate>

@property (readonly) ODNode *node;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly) NSHashTable *observers;
@property (readonly) SPMVolumeObserver *volumeObserver;
@property (readonly) NSArray *sharePoints;
@property (retain) NSData *authorizationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)connection;
- (void)removeObserver:(id)a0;
- (id)_init;
- (void)addObserver:(id)a0;
- (BOOL)addSharePoint:(id)a0 error:(id *)a1;
- (BOOL)removeSharePoint:(id)a0 error:(id *)a1;
- (BOOL)updateSharePoint:(id)a0 error:(id *)a1;
- (BOOL)_addSharePointNamed:(id)a0 withInfo:(id)a1;
- (void)_fetchSharePoints;
- (void)_handleListChangeNotification:(id)a0;
- (void)_invalidateAndNotifyObservers;
- (id)_records;
- (BOOL)_removeSharePointNamed:(id)a0;
- (void)volumeObserver:(id)a0 observedVolumeMounted:(id)a1;
- (void)volumeObserver:(id)a0 observedVolumeUnmounted:(id)a1;

@end
