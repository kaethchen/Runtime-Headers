@interface BRCQueryItemUtil : NSObject {
    BOOL _isMacOS;
}

+ (id)sharedQueryItemUtil;

- (long long)contentPolicyForItemInfo:(id)a0 sessionContext:(id)a1;
- (long long)contentPolicyForRootContainerWithSessionContext:(id)a0;
- (id)initWithMacOS:(BOOL)a0;

@end
