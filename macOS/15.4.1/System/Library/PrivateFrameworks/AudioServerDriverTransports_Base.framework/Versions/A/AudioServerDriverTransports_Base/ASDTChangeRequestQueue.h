@class NSString, ASDObject, NSMutableArray, ASDTChangeRequestManager;

@interface ASDTChangeRequestQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (weak, nonatomic) ASDTChangeRequestManager *manager;
@property (weak, nonatomic) ASDObject *object;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) int flags;
@property (nonatomic) struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *executionThread;
@property (nonatomic) unsigned int changeRequestsExecuted;

+ (id)forObject:(id)a0 withName:(id)a1 andManager:(id)a2;

- (void).cxx_destruct;
- (void)execute;
- (BOOL)addChangeRequest:(id)a0;
- (void)executeChangeRequest:(id)a0;
- (id)initForObject:(id)a0 withName:(id)a1 andManager:(id)a2;

@end
