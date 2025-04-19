@class NSString, MCMUserIdentityCache;
@protocol MCMStaticConfiguration;

@interface MCMContainerClassIterator : NSObject <MCMContainerClassUserIdentityIterator, MCMContainerClassIterator> {
    MCMUserIdentityCache *_userIdentityCache;
}

@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<MCMStaticConfiguration> staticConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_selectWithFlags:(unsigned long long)a0 includeUserIdentities:(BOOL)a1 iterator:(id /* block */)a2;
- (id)initWithStaticConfig:(id)a0;
- (id)initWithStaticConfig:(id)a0 userIdentityCache:(id)a1;
- (void)selectAutorollingWithIterator:(id /* block */)a0;
- (void)selectAutorollingWithUserIdentityIterator:(id /* block */)a0;
- (void)selectBundleWithIterator:(id /* block */)a0;
- (void)selectBundleWithUserIdentityIterator:(id /* block */)a0;
- (void)selectDataProtectedWithIterator:(id /* block */)a0;
- (void)selectDataProtectedWithUserIdentityIterator:(id /* block */)a0;
- (void)selectGlobalWithIterator:(id /* block */)a0;
- (void)selectGlobalWithUserIdentityIterator:(id /* block */)a0;
- (void)selectRemoteWithIterator:(id /* block */)a0;
- (void)selectRemoteWithUserIdentityIterator:(id /* block */)a0;
- (void)selectSystemWithIterator:(id /* block */)a0;
- (void)selectSystemWithUserIdentityIterator:(id /* block */)a0;
- (void)selectUserDataWithIterator:(id /* block */)a0;
- (void)selectUserDataWithUserIdentityIterator:(id /* block */)a0;
- (void)selectUserWithIterator:(id /* block */)a0;
- (void)selectUserWithUserIdentityIterator:(id /* block */)a0;
- (void)selectWithFlags:(unsigned long long)a0 iterator:(id /* block */)a1;
- (void)selectWithFlags:(unsigned long long)a0 userIdentityIterator:(id /* block */)a1;
- (void)selectWithIterator:(id /* block */)a0;

@end
