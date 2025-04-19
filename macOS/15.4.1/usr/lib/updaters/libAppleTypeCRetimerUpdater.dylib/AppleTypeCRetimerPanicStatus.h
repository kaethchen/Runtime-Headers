@interface AppleTypeCRetimerPanicStatus : NSObject

@property BOOL fwPanic;
@property unsigned int assertID;

- (id)description;
- (id)initWithPanicState:(BOOL)a0 assertID:(unsigned int)a1;

@end
