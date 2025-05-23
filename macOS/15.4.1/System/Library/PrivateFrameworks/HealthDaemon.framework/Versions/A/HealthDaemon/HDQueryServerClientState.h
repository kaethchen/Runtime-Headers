@interface HDQueryServerClientState : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int applicationState;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, nonatomic, getter=isBackgroundRunning) BOOL backgroundRunning;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)initWithApplicationState:(unsigned int)a0;

@end
