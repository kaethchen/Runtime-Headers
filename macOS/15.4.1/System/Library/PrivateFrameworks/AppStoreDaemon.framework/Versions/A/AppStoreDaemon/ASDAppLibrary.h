@class NSString, ASDServiceBroker, ASDNotificationCenter;

@interface ASDAppLibrary : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
    ASDNotificationCenter *_notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)interface;
+ (void)uninstallApp:(id)a0 withResultHandler:(id /* block */)a1;
+ (long long)launchApp:(id)a0;
+ (long long)launchApp:(id)a0 onPairedDevice:(id)a1;
+ (void)launchApp:(id)a0 onPairedDevice:(id)a1 withResultHandler:(id /* block */)a2;
+ (void)launchApp:(id)a0 withResultHandler:(id /* block */)a1;
+ (long long)launchMessagesExtensionForApp:(id)a0;
+ (void)launchMessagesExtensionForApp:(id)a0 withResultHandler:(id /* block */)a1;
+ (unsigned char)openableStatusForExecutableAtPath:(id)a0;
+ (void)uninstallApp:(id)a0 requestUserConfirmation:(BOOL)a1 withResultHandler:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;

@end
