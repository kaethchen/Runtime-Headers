@interface PGSocialGroupPersistenceActions : NSObject {
    void /* unknown type, empty encoding */ socialGroupsSkippedBecauseNoCommonAssets;
    void /* unknown type, empty encoding */ newAutomaticSocialGroupMembersAndOrders;
    void /* unknown type, empty encoding */ currentAutomaticSocialGroupsToModifyAndOrders;
    void /* unknown type, empty encoding */ outdatedAutomaticSocialGroupsToDelete;
}

- (id)init;
- (void).cxx_destruct;
- (long long)currentAutomaticSocialGroupsToModifyCount;
- (long long)newAutomaticSocialGroupsToCreateCount;
- (long long)outdatedAutomaticSocialGroupsToDeleteCount;
- (long long)socialGroupsSkippedBecauseNoCommonAssetsCount;

@end
