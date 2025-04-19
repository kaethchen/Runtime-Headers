@protocol WLKNotificationsImpl, WLKNotificationCenterDelegate;

@interface WLKNotificationCenter : NSObject {
    id<WLKNotificationsImpl> _impl;
}

@property (weak, nonatomic) id<WLKNotificationCenterDelegate> delegate;

+ (id)defaultCenter;

- (id)init;
- (void).cxx_destruct;
- (void)setBadgeNumber:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setBadgeString:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)post:(id)a0 title:(id)a1 body:(id)a2 options:(id)a3;
- (BOOL)isCategoryEnabledByUser:(long long)a0;

@end
