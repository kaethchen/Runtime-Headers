@class NSSet, NSMutableDictionary, NSData, NSMutableSet;

@interface LADomainStateCompanion : NSObject {
    NSMutableSet *_availableCompanions;
    NSData *_stateHash;
    NSMutableDictionary *_stateHashForCompanionType;
}

@property (readonly, nonatomic) NSSet *availableCompanionTypes;
@property (readonly, nonatomic) NSData *stateHash;

- (id)description;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (void)_resolveCombinedStateHash;
- (id)stateHashForCompanionType:(long long)a0;

@end
