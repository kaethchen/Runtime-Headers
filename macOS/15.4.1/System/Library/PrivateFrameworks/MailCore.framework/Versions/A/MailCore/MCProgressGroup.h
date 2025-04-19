@class NSProgress, NSMutableDictionary, MCDiscretionaryWorkScheduler;

@interface MCProgressGroup : NSObject {
    MCDiscretionaryWorkScheduler *_workScheduler;
    NSMutableDictionary *_progressBySlice;
}

@property (readonly, weak, nonatomic) NSProgress *parent;
@property (retain, nonatomic) MCDiscretionaryWorkScheduler *workScheduler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0;
- (void)modifyCompletedBy:(long long)a0 forSlice:(long long)a1;
- (void)modifyTotalBy:(long long)a0 forSlice:(long long)a1;
- (void)completeAllProgress;

@end
