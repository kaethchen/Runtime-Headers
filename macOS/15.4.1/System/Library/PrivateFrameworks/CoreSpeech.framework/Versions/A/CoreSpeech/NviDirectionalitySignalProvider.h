@class NSString;

@interface NviDirectionalitySignalProvider : NSObject <NviSignalProvider>

@property (readonly, nonatomic) unsigned long long sigType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (id)initWithDataSource:(id)a0 assetsProvider:(id)a1;
- (void)startWithNviContext:(id)a0 didStartHandler:(id /* block */)a1;
- (void)stopWithDidStopHandler:(id /* block */)a0;

@end
