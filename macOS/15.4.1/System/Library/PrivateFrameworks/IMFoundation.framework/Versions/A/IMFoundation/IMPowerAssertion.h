@class NSString, NSDictionary;

@interface IMPowerAssertion : NSObject {
    unsigned int _assertion;
    NSString *_identifier;
    NSDictionary *_properties;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 timeout:(double)a1;
- (id)initWithIdentifier:(id)a0 timeoutSec:(double)a1 properties:(id)a2;

@end
