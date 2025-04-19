@class NSString, NSMutableDictionary, NSMutableSet, NSMutableOrderedSet, BKSHIDEventDeferringEnvironment;

@interface BKEventDeferringEnvironmentGraph : NSObject <BSDescriptionStreamable, NSCopying> {
    BKSHIDEventDeferringEnvironment *_environment;
    NSMutableDictionary *_topLevelInEachProcess;
    NSMutableSet *_selectedNodeIdentities;
    NSMutableDictionary *_pidToActiveUIResponderNodes;
    NSMutableDictionary *_pidToActiveUIResponderTokens;
    NSMutableOrderedSet *_allNodes;
    NSMutableDictionary *_nodeByIdentity;
    NSMutableDictionary *_tokenToNode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)a0;

@end
