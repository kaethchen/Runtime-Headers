@class NSDate, NSString, NSObject;
@protocol OS_dispatch_group;

@interface CKPlaceholderOperation : NSOperation {
    NSObject<OS_dispatch_group> *_group;
    int _executionState;
    BOOL _finishInvoked;
    NSDate *_startDate;
    NSString *_operationID;
    id /* block */ _daemonInvokeBlock;
}

- (id)description;
- (void).cxx_destruct;
- (void)start;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;

@end
