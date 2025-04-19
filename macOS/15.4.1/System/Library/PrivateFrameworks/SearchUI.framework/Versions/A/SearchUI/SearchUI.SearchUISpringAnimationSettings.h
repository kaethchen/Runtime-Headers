@class _TtC8SearchUI31SearchUISpringAnimationSettings, CABasicAnimation;

@interface SearchUI.SearchUISpringAnimationSettings : NSObject <SearchUI.SearchUIAnimationSettings>

@property (class, nonatomic, readonly) _TtC8SearchUI31SearchUISpringAnimationSettings *buttonSelection;
@property (class, nonatomic, readonly) _TtC8SearchUI31SearchUISpringAnimationSettings *buttonSelectionCancel;
@property (class, nonatomic, readonly) _TtC8SearchUI31SearchUISpringAnimationSettings *buttonIconAppear;

@property (nonatomic) void /* unknown type, empty encoding */ bounce;
@property (nonatomic) void /* unknown type, empty encoding */ perceptualDuration;
@property (nonatomic) void /* unknown type, empty encoding */ delay;
@property (nonatomic, readonly) CABasicAnimation *coreAnimation;

- (id)init;

@end
