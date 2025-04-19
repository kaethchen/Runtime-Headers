@class AFHomeAnnouncement, NSString, AFNotifyObserver, AFInstanceContext, NSHashTable, NSObject, AFHomeAnnouncementSnapshot;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AFHomeAnnouncementObserver : NSObject <AFNotifyObserverDelegate, AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
    NSHashTable *_listeners;
    AFNotifyObserver *_notifyObserver;
    long long _groupingDepth;
    NSObject<OS_dispatch_group> *_snapshotGroup;
    unsigned long long _state;
    AFHomeAnnouncement *_lastPlayedAnnouncement;
    AFHomeAnnouncementSnapshot *_snapshot;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_tearDown;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)_updateSnapshot:(id)a0;
- (void)_enumerateListenersUsingBlock:(id /* block */)a0;
- (void)getStateWithCompletion:(id /* block */)a0;
- (id)initWithInstanceContext:(id)a0;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)notifyObserver:(id)a0 didReceiveNotificationWithToken:(int)a1;
- (void)_beginGrouping;
- (void)_endGrouping;
- (void)_fetchStateAndLastPlayedAnnouncementForReason:(id)a0 completion:(id /* block */)a1;
- (void)_handleNotifyStateChangeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)_setUp;
- (void)_updateForReason:(id)a0;
- (void)_updateLastPlayedAnnouncement:(id)a0;
- (void)_updateState:(unsigned long long)a0;
- (void)getSnapshotWithCompletion:(id /* block */)a0;

@end
