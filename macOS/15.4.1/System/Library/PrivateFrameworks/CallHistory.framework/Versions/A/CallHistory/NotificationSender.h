@class NSString, NSDictionary;

@interface NotificationSender : NSObject

@property (readonly) NSString *name;
@property (retain) NSDictionary *userInfo;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
