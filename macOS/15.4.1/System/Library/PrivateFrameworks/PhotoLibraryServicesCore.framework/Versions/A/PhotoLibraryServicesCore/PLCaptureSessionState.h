@interface PLCaptureSessionState : NSObject

@property (readonly) unsigned long long type;

+ (id)unknown;
+ (id)none;
+ (id)lockedWithSessionIdentifier:(id)a0;
+ (id)unlockedWithSessionIdentifier:(id)a0;

- (id)description;
- (id)init;
- (id)initWithType:(unsigned long long)a0;

@end
