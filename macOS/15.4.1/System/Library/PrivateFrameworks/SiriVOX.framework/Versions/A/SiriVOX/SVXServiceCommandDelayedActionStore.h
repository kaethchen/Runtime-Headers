@class NSMutableDictionary;

@interface SVXServiceCommandDelayedActionStore : NSObject {
    NSMutableDictionary *_actionsByKey;
}

- (id)init;
- (void).cxx_destruct;
- (void)removeAllActions;
- (id)actionForKey:(id)a0;
- (void)removeActionForKey:(id)a0;
- (void)setAction:(id)a0 forKey:(id)a1;

@end
