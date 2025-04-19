@class LADomainStateBiometry, LADomainStateCompanion, NSData;

@interface LADomainState : NSObject {
    NSData *_stateHash;
}

@property (readonly, nonatomic) LADomainStateBiometry *biometry;
@property (readonly, nonatomic) LADomainStateCompanion *companion;
@property (readonly, nonatomic) NSData *stateHash;

- (id)description;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (void)_resolveCombinedStateHash;

@end
