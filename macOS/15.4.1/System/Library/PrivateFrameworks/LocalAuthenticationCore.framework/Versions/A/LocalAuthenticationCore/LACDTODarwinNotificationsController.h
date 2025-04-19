@class NSString;
@protocol LACDarwinNotificationCenter;

@interface LACDTODarwinNotificationsController : NSObject <LACDTOEventHandler> {
    id<LACDarwinNotificationCenter> _notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNotificationCenter:(id)a0;
- (void)handleEvent:(id)a0 sender:(id)a1;

@end
