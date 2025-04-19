@interface OSAComponentInstance : NSObject

@property (readonly) struct ComponentInstanceRecord { long long x0[1]; } *componentInstance;

+ (id)newWithComponentInstance:(struct ComponentInstanceRecord { long long x0[1]; } *)a0;

- (void)dealloc;
- (void)finalize;
- (id)initWithComponentInstance:(struct ComponentInstanceRecord { long long x0[1]; } *)a0;

@end
