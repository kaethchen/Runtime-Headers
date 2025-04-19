@class NSDictionary, GFNode, NSMutableDictionary;

@interface GFPort : NSObject <GFBase> {
    unsigned long long _flags;
    GFNode *_owner;
    GFPort *_originalPort;
    NSDictionary *_attributes;
    NSMutableDictionary *_userInfo;
    GFPort *_rootPort;
    void *_unused[3];
}

- (void)dealloc;
- (id)description;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)_flags;
- (void)_setFlags:(unsigned long long)a0;
- (id)state;
- (id)userInfo;
- (BOOL)setState:(id)a0;
- (id)attributes;
- (id)key;
- (id)_userInfo;
- (id)node;
- (void)_unsetFlags:(unsigned long long)a0;
- (id)editName:(id)a0 inView:(id)a1;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (id)originalPort;
- (void)portWillDeleteFromNode;
- (void)resetTooltipView;
- (id)setupTooltipView;
- (void)stateUpdated;
- (id)tooltipString;

@end
