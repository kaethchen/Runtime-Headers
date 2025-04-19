@class NSMutableDictionary, NSMutableArray;

@interface IKHardwareCapsChangeNotifier : NSObject {
    struct IONotificationPort { } *_notificationPort;
    NSMutableDictionary *_notifierMap;
    NSMutableArray *_cameraCallbackObjs;
    BOOL _hasQ8;
    BOOL _hasDV;
    id _delegate;
}

+ (id)hardwareCapsChangeNotifier;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)initialize;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)registerForHardwareNotification;
- (void)_broadcastHardwareCaps;
- (BOOL)_isGUIDUnique:(id)a0;
- (void)audioHardwareChanged:(id)a0;
- (unsigned int)cameraCallbackCreateNotifier:(unsigned int)a0;
- (unsigned int)cameraCallbackFindParent:(unsigned int)a0 parentClass:(const char *)a1;
- (void)createNotification:(struct __CFDictionary { } *)a0 callback:(void /* function */ *)a1;
- (void)initIOKitNotifications;
- (struct IONotificationPort { } *)notificationPort;
- (id)notifierMap;
- (void)unregisterForHardwareNotification;
- (id)vcHardwareCaps;

@end
