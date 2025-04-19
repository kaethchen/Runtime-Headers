@class NSString;

@interface TFInterprocessNotificationCallback : NSObject

@property (copy, nonatomic) NSString *notificationName;
@property (readonly, nonatomic) id /* block */ callback;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNotificationName:(id)a0 callback:(id /* block */)a1;

@end
