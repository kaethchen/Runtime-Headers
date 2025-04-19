@class NSObject;
@protocol OS_dispatch_queue;

@interface OperationState : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property BOOL operationCancelled;
@property int operationRefcount;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)cancelled;
- (void)end;
- (BOOL)begin;

@end
