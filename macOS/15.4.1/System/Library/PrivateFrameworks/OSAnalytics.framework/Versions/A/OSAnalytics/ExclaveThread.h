@class NSNumber, NSMutableArray;

@interface ExclaveThread : NSObject

@property (retain, nonatomic) NSMutableArray *stackEntries;
@property (retain, nonatomic) NSNumber *schedulingContextId;

- (void).cxx_destruct;
- (void)addStackEntries:(id)a0;

@end
