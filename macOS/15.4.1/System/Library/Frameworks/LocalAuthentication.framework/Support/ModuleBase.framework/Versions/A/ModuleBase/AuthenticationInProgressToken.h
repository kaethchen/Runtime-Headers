@class NSDate;

@interface AuthenticationInProgressToken : NSObject <LACRemoteAuthenticationOwnership>

@property (readonly) long long priority;
@property (readonly) int pid;
@property (readonly) NSDate *date;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPriority:(long long)a0 pid:(int)a1;

@end
