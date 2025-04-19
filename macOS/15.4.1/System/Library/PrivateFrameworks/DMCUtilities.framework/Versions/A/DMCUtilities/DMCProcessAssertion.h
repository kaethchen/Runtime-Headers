@class NSString, NSObject;
@protocol OS_os_transaction;

@interface DMCProcessAssertion : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly, nonatomic) NSString *reason;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0;
- (void)_releaseAssertion;
- (void)_createAssertion;

@end
