@class NSString;

@interface MTPowerAssertion : NSObject

@property (readonly, nonatomic) double assertionTimeout;
@property (readonly, nonatomic) NSString *name;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)takeAssertion;
- (void)releaseAssertion;
- (id)initWithName:(id)a0 assertionTimeout:(double)a1;

@end
