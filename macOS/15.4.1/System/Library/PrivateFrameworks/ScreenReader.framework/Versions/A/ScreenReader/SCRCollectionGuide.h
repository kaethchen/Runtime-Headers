@class NSMutableArray, SCRGuide;
@protocol SCRCollectionGuideDelegateProtocol;

@interface SCRCollectionGuide : NSObject

@property (retain, nonatomic) NSMutableArray *guides;
@property (nonatomic) unsigned long long currentGuideIndex;
@property (nonatomic) unsigned long long _subguideDepth;
@property (readonly, nonatomic) SCRGuide *collectionGuide;
@property (weak, nonatomic) id<SCRCollectionGuideDelegateProtocol> delegate;
@property (readonly, nonatomic) SCRGuide *currentGuide;
@property (nonatomic) BOOL shouldWrap;
@property (nonatomic) BOOL shouldCommunicateGuideChanges;

+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)dispatchEvent:(id)a0;
- (void)removeAllGuides;
- (id)initWithGuides:(id)a0 andCurrentIndex:(unsigned long long)a1;
- (void)_communicateGuideChange;
- (void)_communicateReachedCollectionBoundary;
- (void)_refreshMenuWindow;
- (void)addGuide:(id)a0;
- (void)insertGuide:(id)a0 atIndex:(unsigned long long)a1;
- (void)moveToGuide:(id)a0;
- (void)moveToGuideAtIndex:(unsigned long long)a0;
- (void)moveToGuideInDirection:(long long)a0;
- (void)removeGuide:(id)a0;
- (void)removeGuideAtIndex:(unsigned long long)a0;

@end
