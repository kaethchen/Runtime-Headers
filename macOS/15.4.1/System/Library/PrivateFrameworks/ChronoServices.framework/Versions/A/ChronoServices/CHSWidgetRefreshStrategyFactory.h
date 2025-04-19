@protocol CHSWidgetRefreshStrategy;

@interface CHSWidgetRefreshStrategyFactory : NSObject

@property (class, readonly, nonatomic) id<CHSWidgetRefreshStrategy> defaultStrategy;
@property (class, readonly, nonatomic) id<CHSWidgetRefreshStrategy> disabledStrategy;

+ (id)rateLimitedWithPolicyIdentifier:(id)a0;

@end
