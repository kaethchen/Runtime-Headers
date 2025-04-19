@class NSObject;
@protocol OS_dispatch_group;

@interface SADispatchGroup : NSObject

@property (retain) NSObject<OS_dispatch_group> *group;
@property int entries;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (int)wait:(unsigned long long)a0;
- (void)enter;
- (void)leave;

@end
