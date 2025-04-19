@class CAMediaTimingFunction;

@interface NSAnimationContext : NSObject

@property (class, readonly) NSAnimationContext *currentContext;

@property (nonatomic) id /* block */ animationProvider;
@property BOOL allowsAsynchronousAnimation;
@property double duration;
@property (retain) CAMediaTimingFunction *timingFunction;
@property (copy) id /* block */ completionHandler;
@property BOOL allowsImplicitAnimation;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (void)activate;
+ (BOOL)_hasActiveGrouping;
+ (void)_runWithPreCommitCompletionHandlerAnimationGroup:(id /* block */)a0 completionHandler:(id /* block */)a1;
+ (void)addCommitHandler:(id /* block */)a0;
+ (void)beginGrouping;
+ (id)completionHandlerSuspension;
+ (void)endGrouping;
+ (void)flush;
+ (void)runAnimationGroup:(id /* block */)a0;
+ (void)runAnimationGroup:(id /* block */)a0 completionHandler:(id /* block */)a1;

- (oneway void)release;
- (BOOL)allowsWeakReference;
- (id)autorelease;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (BOOL)isActive;
- (void)beginPerformanceMeasurementForIdentifier:(id)a0;
- (void)endPerformanceMeasurementForIdentifier:(id)a0;
- (BOOL)isExplicit;
- (BOOL)isImplicit;

@end
