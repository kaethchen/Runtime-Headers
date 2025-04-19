@class NSObject;
@protocol OS_os_transaction;

@interface NDAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly, nonatomic) unsigned int powerAssertionID;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 options:(long long)a1;

@end
