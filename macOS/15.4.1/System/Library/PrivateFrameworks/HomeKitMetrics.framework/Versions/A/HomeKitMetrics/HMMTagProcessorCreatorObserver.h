@class NSString;

@interface HMMTagProcessorCreatorObserver : NSObject <HMMTagObserving>

@property (readonly, nonatomic) id /* block */ creationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addObserverForStartTags:(id)a0 usingCreatorBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithCreationBlock:(id /* block */)a0;
- (void)observeTaggedEvent:(id)a0 addProcessorBlock:(id /* block */)a1;

@end
