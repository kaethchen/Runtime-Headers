@class NSEvent, TIInputContextHistory;

@interface _NSTextSmartReplyLastClosedContext : NSObject

@property (copy, nonatomic) NSEvent *event;
@property (copy, nonatomic) TIInputContextHistory *history;
@property (nonatomic) double releaseTimestamp;
@property (nonatomic) long long dismissType;

- (void).cxx_destruct;
- (BOOL)dismissedIntentionally;
- (id)initWithEvent:(id)a0 history:(id)a1 dismissType:(long long)a2;

@end
