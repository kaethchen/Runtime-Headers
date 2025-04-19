@class NSArray;

@interface CBIdentityQuery : NSObject {
    id _delegate;
    BOOL _showsHiddenIdentities;
    NSArray *_identities;
    struct __CSIdentityQuery { } *_csQuery;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)identities;
- (void)stop;
- (BOOL)execute;
- (struct __CSIdentityQuery { } *)CSIdentityQuery;
- (id)loginIdentities;
- (BOOL)executeAsynchronously;
- (id)initWithGroupName:(id)a0 authority:(id)a1;
- (id)initWithUserName:(id)a0 authority:(id)a1;
- (void)receiveEvent:(long long)a0 fromQuery:(struct __CSIdentityQuery { } *)a1 identities:(id)a2 error:(id)a3;
- (void)setShowsHiddenIdentities:(BOOL)a0;
- (BOOL)showsHiddenIdentities;

@end
