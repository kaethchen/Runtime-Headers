@class NSString, NSObject;
@protocol LACUNManagerDelegate;

@interface LACUNManager : NSObject <LACUNManager> {
    NSObject *_notificationCenter;
}

@property (weak, nonatomic) id<LACUNManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)cancelAllNotificationsWithCompletion:(id /* block */)a0;
- (void)cancelNotificationsWithIdentifiers:(id)a0 scheduledOnly:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithBundleIdentifier:(id)a0 categories:(id)a1;
- (void)postNotification:(id)a0 completion:(id /* block */)a1;

@end
