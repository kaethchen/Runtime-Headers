@class NSString, NSDictionary;

@interface PAPerfLoggingIntervalTransitionEvent : NSObject

@property (readonly) double transitionTimeInSec;
@property (readonly) NSString *transitioningIntervalType;
@property (readonly) int transitionType;
@property (readonly) NSString *transitionTypeString;
@property (readonly) NSDictionary *context;

+ (id)stringForTransitionTimeline:(id)a0 withStartTimeInSec:(double)a1 andEndTimeInSec:(double)a2;

- (void)dealloc;
- (long long)compare:(id)a0;
- (id)_stringForTransitionWithOperationStartTimeInSec:(double)a0 andPreviousEventTimeInSec:(double)a1;
- (id)initWithTransitionType:(int)a0 ofIntervalType:(id)a1 atTimestamp:(double)a2 withContext:(id)a3;

@end
