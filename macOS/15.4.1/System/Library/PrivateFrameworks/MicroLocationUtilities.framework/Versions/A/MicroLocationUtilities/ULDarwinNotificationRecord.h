@class NSString, NSNumber;

@interface ULDarwinNotificationRecord : NSObject

@property (retain, nonatomic) NSString *notificationName;
@property (retain, nonatomic) NSNumber *registrationToken;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (id)initWithNotificationName:(id)a0 registrationToken:(id)a1 handler:(id /* block */)a2;

@end
