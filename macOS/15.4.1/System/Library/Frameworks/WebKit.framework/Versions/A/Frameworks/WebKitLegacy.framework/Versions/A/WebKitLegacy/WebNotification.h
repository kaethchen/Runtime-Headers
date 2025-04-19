@class WebNotificationPrivate;

@interface WebNotification : NSObject {
    WebNotificationPrivate *_private;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)iconURL;
- (id)title;
- (id)tag;
- (id)origin;
- (id)notificationID;
- (id)body;
- (id)dir;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchErrorEvent;
- (void)dispatchShowEvent;
- (id)initWithCoreNotification:(void *)a0;
- (id)lang;

@end
