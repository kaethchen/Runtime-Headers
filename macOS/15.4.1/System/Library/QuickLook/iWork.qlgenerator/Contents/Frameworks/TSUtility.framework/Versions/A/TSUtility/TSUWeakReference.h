@interface TSUWeakReference : NSObject

@property (readonly, nonatomic) id object;

+ (id)weakReferenceWithObject:(id)a0;

- (void)dealloc;
- (id)init;
- (id)initWithObject:(id)a0;

@end
