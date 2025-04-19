@interface UIPointFIFO : NSObject

@property (retain, nonatomic) UIPointFIFO *nextFIFO;

- (void)dealloc;
- (void)clear;
- (void)flush;
- (void)addPoint:(SEL)a0;
- (void)emitPoint:(SEL)a0;
- (id)initWithFIFO:(id)a0;

@end
