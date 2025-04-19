@class NSString, NSArray, NSURL, ICQiCloudDetailsPageInfo, ICQBackupInfo, ICQManageStoragePageInfo, ICQSubscriptionInfo, NSNumber;

@interface ICQCloudStorageSummary : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *displayLabel;
@property (retain, nonatomic) NSNumber *totalStorage;
@property (retain, nonatomic) NSNumber *usedStorage;
@property (retain, nonatomic) NSNumber *freeStorage;
@property (retain, nonatomic) NSNumber *commerceStorage;
@property (retain, nonatomic) NSArray *mediaStorage;
@property (retain, nonatomic) NSArray *tips;
@property (retain, nonatomic) ICQBackupInfo *backupInfo;
@property (retain, nonatomic) ICQSubscriptionInfo *subscriptionInfo;
@property (retain, nonatomic) ICQiCloudDetailsPageInfo *iCloudDetailsPageInfo;
@property (retain, nonatomic) NSURL *manageStorageURL;
@property (copy, nonatomic) NSString *manageStorageTitle;
@property (copy, nonatomic) NSString *manageStorageActionButtonText;
@property (retain, nonatomic) ICQManageStoragePageInfo *manageStoragePage;
@property (readonly, nonatomic) BOOL shouldUseNativeManageStorage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
