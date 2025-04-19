@class NSMutableDictionary;

@interface CatacombStateCache : NSObject {
    NSMutableDictionary *_cachedStates;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (int)addGroupStatesFromBuffer:(id)a0;
- (int)addUserStatesFromBuffer:(id)a0;
- (id)cachedComponents;
- (id)cachedGroupComponentsForUser:(unsigned int)a0;
- (id)cachedUserComponents;
- (void)removeUser:(unsigned int)a0;
- (unsigned int)stateOfComponent:(id)a0;
- (unsigned int)stateOfMasterComponent;
- (unsigned int)stateOfUserComponent:(unsigned int)a0;

@end
