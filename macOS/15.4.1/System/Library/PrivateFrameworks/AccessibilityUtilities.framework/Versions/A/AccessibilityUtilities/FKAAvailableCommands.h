@class AXSSKeyboardCommandMap, NSString, NSMutableDictionary, NSArray, NSObject, NSSet;
@protocol OS_dispatch_queue;

@interface FKAAvailableCommands : NSObject

@property (class, readonly, nonatomic) FKAAvailableCommands *sharedInstance;

@property (retain, nonatomic) NSString *siriShortcutsDidChangeObserverToken;
@property (retain, nonatomic) id forceTouchEnabledDidChangeObserverToken;
@property (retain, nonatomic) NSMutableDictionary *tokensToUpdateBlocks;
@property (retain, nonatomic) NSArray *cachedSiriShortcutsCommands;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *siriShortcutsQueue;
@property (readonly, nonatomic) NSSet *commands;
@property (readonly, nonatomic) NSArray *categories;
@property (retain, nonatomic) AXSSKeyboardCommandMap *commandMap;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)registerUpdateBlock:(id /* block */)a0;
- (void)unregisterUpdateBlockWithToken:(id)a0;

@end
