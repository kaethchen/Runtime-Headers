@interface SLSZeroingWeakContainer : NSObject

@property id reference;
@property (readonly) id object;

+ (id)containerWithObject:(id)a0;

- (id)initWithObject:(id)a0;
- (void)invalidate;

@end
