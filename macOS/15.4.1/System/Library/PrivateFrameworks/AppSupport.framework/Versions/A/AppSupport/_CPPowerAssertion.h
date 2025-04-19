@class NSString, NSArray;

@interface _CPPowerAssertion : NSObject {
    NSString *_identifier;
    NSArray *_stack;
}

@property (nonatomic) double timeout;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0 timeout:(double)a1;
- (void)timedout;

@end
