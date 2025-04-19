@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MRPlaybackQueueClient : NSObject {
    NSMutableDictionary *_controllers;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)_handleApplicationRemovedNotification:(id)a0;
- (void)_handleOriginRemovedNotification:(id)a0;
- (void)_handlePlayerPathRemovedNotification:(id)a0;
- (id)existingSubscriptionControllerForPlayerPath:(id)a0;
- (id)subscriptionControllerForPlayerPath:(id)a0;

@end
