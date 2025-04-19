@class NSError;

@interface FSContainerStatus : NSObject <NSCopying>

@property (class, readonly) FSContainerStatus *active;
@property (class, readonly) FSContainerStatus *ready;

@property (readonly) long long state;
@property (readonly, copy) NSError *status;

+ (id)activeWithStatus:(id)a0;
+ (id)blockedWithStatus:(id)a0;
+ (id)notReadyWithStatus:(id)a0;
+ (id)readyWithStatus:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithState:(long long)a0 status:(id)a1;

@end
