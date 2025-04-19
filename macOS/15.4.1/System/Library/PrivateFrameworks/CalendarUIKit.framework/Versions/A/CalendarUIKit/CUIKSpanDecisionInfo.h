@interface CUIKSpanDecisionInfo : NSObject

@property (nonatomic) BOOL shouldRequestSpan;
@property (nonatomic) BOOL proposeFuture;
@property (nonatomic) long long recurringEventCount;

+ (BOOL)_allowSlicingEvent:(id)a0;
+ (id)spanDecisionInfoForEvents:(id)a0;

@end
