@interface CSPowerAssertionMac : NSObject {
    unsigned int _assertionID;
}

- (void)dealloc;
- (void)invalidate;
- (id)initWithTimeout:(double)a0;

@end
