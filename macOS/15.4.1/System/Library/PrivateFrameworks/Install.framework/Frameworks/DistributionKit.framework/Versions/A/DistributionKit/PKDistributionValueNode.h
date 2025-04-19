@class NSObject, NSString, PKDistributionScript, NSError, PKDistributionChoiceItem, NSMutableSet;
@protocol OS_dispatch_queue, PKDistributionValueNodeCallerTrackingDelegate;

@interface PKDistributionValueNode : NSObject {
    id _currentValue;
    PKDistributionScript *_script;
    PKDistributionChoiceItem *_choiceItem;
    NSMutableSet *_callingNodes;
    NSObject<OS_dispatch_queue> *_valueQueue;
    id<PKDistributionValueNodeCallerTrackingDelegate> _delegate;
}

@property (retain) id currentValue;
@property (retain) NSError *evaluationError;
@property (retain) NSString *identifier;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)script;
- (void)_checkForCallingNode;
- (BOOL)_isNodeCalledBySelf:(id)a0 populateCallTrace:(id)a1;
- (id)callingNodes;
- (id)choiceItem;
- (id)initWithInitialValue:(id)a0 forScript:(id)a1 choiceItem:(id)a2;
- (void)setCallerTrackingDelegate:(id)a0;

@end
