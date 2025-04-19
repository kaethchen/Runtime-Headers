@class NSString;

@interface _NSExpectedObservingInfo : NSObject {
    unsigned long long _suppressAllNotificationCounter;
    id _allSuppressedObject;
    id _specificSuppressedObject;
    NSString *_specificSuppressedKeyPath;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)shouldSuppressNotificationFromObject:(id)a0 keyPath:(id)a1;
- (void)suppressAllNotifications;
- (void)suppressAllNotificationsFromObject:(id)a0;
- (void)suppressSpecificNotificationFromObject:(id)a0 keyPath:(id)a1;
- (void)unsuppressAllNotifications;
- (void)unsuppressAllNotificationsFromObject:(id)a0;
- (void)unsuppressSpecificNotificationFromObject:(id)a0 keyPath:(id)a1;

@end
