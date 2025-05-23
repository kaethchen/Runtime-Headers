@class NSExtensionContext, UNNotificationContent, LSPlugInKitProxy, NSExtension, NSObject;
@protocol OS_dispatch_queue;

@interface UNCNotificationServiceExtension : NSObject {
    NSExtension *_extension;
    NSExtensionContext *_hostContext;
    UNNotificationContent *_mutatedContent;
    double _serviceTime;
    double _graceTime;
}

@property (readonly, nonatomic) LSPlugInKitProxy *proxy;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) double serviceTime;

+ (id)_extensionIdentifiersCurrentlyAllowedAccessToNotificationCenter;
+ (void)_allowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)a0;
+ (void)_disallowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)a0;
+ (id)_extensionIdentifiersToPerExtensionQueues;
+ (BOOL)isAccessToNotificationCenterAllowedForServiceExtensionWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)queue;
- (id)proxy;
- (void)cleanUp;
- (id)_initWithExtension:(id)a0 serviceTime:(double)a1 graceTime:(double)a2;
- (id)mutateContentForNotificationRequest:(id)a0 error:(id *)a1;

@end
