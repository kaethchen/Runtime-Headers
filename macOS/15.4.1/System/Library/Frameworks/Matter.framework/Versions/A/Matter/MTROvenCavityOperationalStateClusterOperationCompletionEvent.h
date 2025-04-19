@class NSNumber;

@interface MTROvenCavityOperationalStateClusterOperationCompletionEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *completionErrorCode;
@property (copy, nonatomic) NSNumber *totalOperationalTime;
@property (copy, nonatomic) NSNumber *pausedTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
