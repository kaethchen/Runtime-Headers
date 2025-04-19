@class PLBackgroundJobCriteria, PLBackgroundJobWorker;

@interface PLBackgroundJobWorkerCriteriaTuple : NSObject

@property (readonly, nonatomic) PLBackgroundJobWorker *worker;
@property (readonly, nonatomic) PLBackgroundJobCriteria *criteria;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithWorker:(id)a0 withCriteria:(id)a1;

@end
