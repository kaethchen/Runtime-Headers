@class CKContainerID, NSSet;

@interface CKDContainerPrivacySettings : NSObject

@property (readonly, copy, nonatomic) CKContainerID *containerID;
@property (readonly, copy, nonatomic) NSSet *applicationBundleIDs;
@property (readonly, nonatomic) long long discoverable;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithContainerID:(id)a0 applicationBundleIDs:(id)a1 discoverable:(long long)a2;

@end
