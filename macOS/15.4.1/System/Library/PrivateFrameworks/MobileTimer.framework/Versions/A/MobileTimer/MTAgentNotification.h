@class NSString, MTPowerAssertion;

@interface MTAgentNotification : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) MTPowerAssertion *powerAssertion;

+ (id)notificationWithType:(long long)a0 name:(id)a1;
+ (id)notificationWithType:(long long)a0 name:(id)a1 powerAssertionTimeout:(double)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)releaseAssertion;
- (id)initWithType:(long long)a0 name:(id)a1 powerAssertionTimeout:(double)a2;

@end
