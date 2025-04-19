@class NSString, NFDCKAssertion;

@interface STSDCKAssertion : NSObject

@property (readonly, nonatomic) NFDCKAssertion *assertion;
@property (readonly, nonatomic) NSString *keyIdentifier;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithAssertion:(id)a0;

@end
