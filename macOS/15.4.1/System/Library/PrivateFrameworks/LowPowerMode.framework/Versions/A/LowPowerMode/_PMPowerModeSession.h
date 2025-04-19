@class NSDate;

@interface _PMPowerModeSession : NSObject

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long expirationEventType;
@property (readonly, nonatomic) NSDate *startedAt;
@property (readonly, nonatomic) NSDate *expiresAt;

- (id)init;
- (void).cxx_destruct;

@end
