@class NSObject;
@protocol OS_dispatch_semaphore;

@interface WFNSProcessInfoBackgroundAssertion : WFBackgroundAssertion

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

+ (id)backgroundAssertionWithName:(id)a0 expirationHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)end;
- (id)initWithName:(id)a0 expirationHandler:(id /* block */)a1;

@end
