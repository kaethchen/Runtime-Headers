@class NSString;

@interface HDSharedDataOptInNotification : HDNanoHealthNotification {
    NSString *_guardianDisplayName;
}

+ (id)category;

- (void).cxx_destruct;
- (id)title;
- (id)body;
- (unsigned long long)destinations;
- (id)initWithNotificationManager:(id)a0 guardianDisplayName:(id)a1;

@end
