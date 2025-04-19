@class NSString;

@interface ABDefaultCustomizationPolicy : NSObject <ABAccountCustomizationPolicy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customizationPolicy;

- (long long)sortOrder;
- (id)allContactsLabelForAccountName:(id)a0;
- (BOOL)canBecomeDefaultAccount;
- (BOOL)canReimportFromMetadata;
- (id)defaultAccountDescription;
- (id)directoryLabelForAccountName:(id)a0;
- (BOOL)groupsCanRemoveMembers;
- (BOOL)showAllContactsIfOnlyOneGroup;
- (BOOL)supportsDistributionLists;
- (BOOL)supportsPhoneticName;
- (BOOL)supportsPhotos;
- (BOOL)usesSyncServices;

@end
