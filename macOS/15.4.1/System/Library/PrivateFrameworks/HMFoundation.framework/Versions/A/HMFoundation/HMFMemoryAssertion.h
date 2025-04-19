@class NSObject;
@protocol OS_os_transaction;

@interface HMFMemoryAssertion : HMFAssertion

@property (retain, nonatomic) NSObject<OS_os_transaction> *internal;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)invalidate;
- (void)mark;

@end
