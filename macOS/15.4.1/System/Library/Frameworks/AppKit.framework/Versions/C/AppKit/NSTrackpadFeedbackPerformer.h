@class NSString;

@interface NSTrackpadFeedbackPerformer : NSObject <NSInputFeedbackPerformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performFeedbackPattern:(long long)a0;
- (void)_performFeedbackPattern:(long long)a0 when:(unsigned long long)a1;
- (void)performFeedbackPattern:(long long)a0 forTimestamp:(double)a1;

@end
