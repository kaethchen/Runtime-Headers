@class NSMutableArray, Caller, NSDate, NSObject;
@protocol OS_os_log, LACServiceLocator;

@interface Request : NSObject {
    NSMutableArray *_heldObjects;
}

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) unsigned int identifier;
@property (readonly, nonatomic) Caller *caller;
@property (readonly, nonatomic) NSDate *received;
@property (retain, nonatomic) id<LACServiceLocator> serviceLocator;

+ (id)current;
+ (id)localRequest;
+ (id)requestFromCurrentConnection;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCaller:(id)a0;
- (void)holdObject:(id)a0;
- (id)initWithID:(unsigned int)a0 caller:(id)a1 received:(id)a2;

@end
