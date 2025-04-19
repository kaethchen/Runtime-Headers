@class NSArray, NSDate;

@interface AXETrackingGestureEvent : NSObject

@property (readonly, nonatomic) unsigned long long source;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BOOL isSynthetic;
@property (readonly, nonatomic) NSArray *allTouches;
@property (readonly, nonatomic) NSArray *touchingTouches;

- (id)description;
- (void).cxx_destruct;
- (id)_nameOfSource:(unsigned long long)a0;
- (id)initWithNSEvent:(id)a0 eventSource:(unsigned long long)a1 isSynthetic:(BOOL)a2 previousGestureEvent:(id)a3;
- (id)initWithTouches:(id)a0 eventSource:(unsigned long long)a1 isSynthetic:(BOOL)a2;
- (id)initWithTouches:(id)a0 eventSource:(unsigned long long)a1 isSynthetic:(BOOL)a2 previousGestureEvent:(id)a3;
- (id)touchMatchingIdentity:(id)a0 phase:(unsigned long long)a1;
- (id)touchesMatchingPhase:(unsigned long long)a0;

@end
