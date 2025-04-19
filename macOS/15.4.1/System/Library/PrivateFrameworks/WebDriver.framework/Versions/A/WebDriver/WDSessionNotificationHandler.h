@class NSString;

@interface WDSessionNotificationHandler : NSObject

@property (nonatomic) unsigned long long registrationID;
@property (retain, nonatomic) NSString *type;
@property (copy, nonatomic) id /* block */ block;

+ (id)handlerForNotification:(id)a0 withBlock:(id /* block */)a1;

- (void).cxx_destruct;

@end
