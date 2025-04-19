@class NFMutexLock, NSMutableDictionary, NFStateMachineState;

@interface NFStateMachine : NSObject

@property (weak, nonatomic) id owner;
@property (retain, nonatomic) NSMutableDictionary *states;
@property (retain, nonatomic) NSMutableDictionary *events;
@property (retain, nonatomic) NFStateMachineState *state;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NFMutexLock *lock;
@property (nonatomic) long long statusToken;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)activate;
- (void)addEvent:(id)a0;
- (void)deactivate;
- (void)addState:(id)a0;
- (void)activateIfNeeded;
- (void)deactivateIfNeeded;
- (id)fireEventWithName:(id)a0 withContext:(id)a1;
- (id)initWithState:(id)a0 withOwner:(id)a1;

@end
