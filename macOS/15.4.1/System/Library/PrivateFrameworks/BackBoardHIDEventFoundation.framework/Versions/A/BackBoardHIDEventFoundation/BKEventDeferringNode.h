@class NSString, BKSHIDEventDeferringRule, NSMutableOrderedSet;

@interface BKEventDeferringNode : NSObject <BSDescriptionStreamable> {
    BOOL _isActiveUIResponder;
    int _pid;
    BKSHIDEventDeferringRule *_rule;
    NSMutableOrderedSet *_supernodes;
    NSMutableOrderedSet *_subnodes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)a0;

@end
