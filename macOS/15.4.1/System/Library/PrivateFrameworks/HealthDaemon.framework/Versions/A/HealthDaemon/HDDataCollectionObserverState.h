@interface HDDataCollectionObserverState : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isInForeground;
@property (readonly, nonatomic) BOOL hasRunningWorkout;
@property (readonly, nonatomic) BOOL hasBackgroundObserver;

+ (id)dataCollectionObserverStateInForeground:(BOOL)a0 hasRunningWorkout:(BOOL)a1 hasBackgroundObserver:(BOOL)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
