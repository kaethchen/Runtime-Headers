@class NSString;

@interface CSDarkWakePowerAssertionMac : NSObject {
    unsigned int _assertionID;
    NSString *_description;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithDescription:(id)a0 timeout:(double)a1;

@end
