@class NSMutableDictionary, PFWorkContext, NSDate, NSError, PFJobTimer;

@interface PFJob : NSObject

@property unsigned long long jobId;
@property (retain) id uuid;
@property (weak) PFWorkContext *workContext;
@property (retain) NSMutableDictionary *results;
@property (retain) NSDate *start;
@property (retain) NSDate *stop;
@property NSError *error;
@property (retain) id item;
@property unsigned long long jobCountIncrement;
@property (retain) PFJobTimer *timer;
@property (copy) id /* block */ batchStartBlock;
@property (copy) id /* block */ batchCompletionBlock;
@property (retain) id batchUuid;

- (id)copy;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (double)runTime;
- (BOOL)isTimer;
- (id)initWithWorkContext:(id)a0;

@end
