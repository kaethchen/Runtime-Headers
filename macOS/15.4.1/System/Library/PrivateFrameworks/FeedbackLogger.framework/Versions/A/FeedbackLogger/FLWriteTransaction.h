@class RBSAssertion, NSObject;
@protocol OS_os_transaction, OS_os_log;

@interface FLWriteTransaction : NSObject

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) RBSAssertion *rbsAssertion;
@property (retain, nonatomic) NSObject<OS_os_log> *log;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
