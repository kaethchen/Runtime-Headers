@class NSString;

@interface ILNotificationNode : NSObject {
    id observer;
    NSString *path;
    long long flags;
}

- (void)dealloc;
- (id)path;
- (long long)flags;
- (id)observer;
- (id)initWithObserver:(id)a0 path:(id)a1 flags:(long long)a2;

@end
