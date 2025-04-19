@class CABasicAnimation;

@interface SearchUI.SearchUIBasicAnimationSettings : NSObject <SearchUI.SearchUIAnimationSettings>

@property (nonatomic) void /* unknown type, empty encoding */ duration;
@property (nonatomic) void /* unknown type, empty encoding */ delay;
@property (nonatomic, readonly) CABasicAnimation *coreAnimation;

- (id)init;

@end
