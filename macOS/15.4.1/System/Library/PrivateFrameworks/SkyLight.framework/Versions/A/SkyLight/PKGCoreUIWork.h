@interface PKGCoreUIWork : NSObject

@property (copy) id /* block */ rendererWork;
@property (copy) id /* block */ mainThreadWork;

- (void)dealloc;

@end
