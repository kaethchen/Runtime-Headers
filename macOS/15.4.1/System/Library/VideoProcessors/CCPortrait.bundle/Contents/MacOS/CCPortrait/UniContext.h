@class NSPointerArray;

@interface UniContext : NSObject

@property (retain) NSPointerArray *weakArray;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)empty;
- (id)renderOrder;

@end
