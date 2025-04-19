@class HDNotificationManager;

@interface HDNanoHealthNotification : NSObject {
    HDNotificationManager *_notificationManager;
}

+ (id)category;

- (void).cxx_destruct;
- (id)title;
- (id)body;
- (unsigned long long)destinations;
- (id)initWithNotificationManager:(id)a0;
- (void)triggerNotification;

@end
