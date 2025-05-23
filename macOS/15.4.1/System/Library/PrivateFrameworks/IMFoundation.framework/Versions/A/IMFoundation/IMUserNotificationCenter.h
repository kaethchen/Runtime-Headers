@class NSMutableDictionary;

@interface IMUserNotificationCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *identifierToIMUserNotificationQueueMap;
@property (retain, nonatomic) NSMutableDictionary *identifierToListenerQueueMap;
@property (retain, nonatomic) NSMutableDictionary *identifierToBlockQueueMap;
@property (retain, nonatomic) NSMutableDictionary *identifierToRunLoopSourcesMap;
@property (retain, nonatomic) NSMutableDictionary *identifierToCFUserNotificationMap;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)userNotificationCenter:(id)a0 didActivateNotification:(id)a1;
- (void)userNotificationCenter:(id)a0 didDeliverNotification:(id)a1;
- (BOOL)userNotificationCenter:(id)a0 shouldPresentNotification:(id)a1;
- (void)_enqueueListener:(id)a0 forIdentifier:(id)a1;
- (void)removeListener:(id)a0;
- (void)_cancelActiveUserNotificationForIdentifier:(id)a0;
- (id /* block */)_dequeueBlockForIdentifier:(id)a0;
- (id)_dequeueListenerForIdentifier:(id)a0;
- (id)_dequeueUserNotificationForIdentifier:(id)a0;
- (void)_displayNextUserNotificationForIdentifier:(id)a0;
- (void)_enqueueBlock:(id /* block */)a0 forIdentifier:(id)a1;
- (void)_enqueueUserNotification:(id)a0 forIdentifier:(id)a1;
- (id /* block */)_frontBlockForIdentifier:(id)a0;
- (id)_frontListenerForIdentifier:(id)a0;
- (id)_frontUserNotificationForIdentifier:(id)a0;
- (void)_handleUserNotification:(struct __CFUserNotification { } *)a0 responseFlags:(unsigned long long)a1;
- (void)addUserNotification:(id)a0 listener:(id)a1;
- (void)addUserNotification:(id)a0 listener:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)countForIdentifier:(id)a0;
- (void)removeAllListeners;
- (void)removeNotificationsForServiceIdentifier:(id)a0;

@end
