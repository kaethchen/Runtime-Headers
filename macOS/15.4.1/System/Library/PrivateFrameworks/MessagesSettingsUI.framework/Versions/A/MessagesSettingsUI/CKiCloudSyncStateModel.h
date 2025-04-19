@class NSString;

@interface CKiCloudSyncStateModel : NSObject

@property (nonatomic) long long syncState;
@property (nonatomic) long long syncStatusMacButtonType;
@property (retain, nonatomic) NSString *messagesInCloudCount;
@property (retain, nonatomic) NSString *syncStatus;
@property (retain, nonatomic) NSString *syncStatusFooterText;
@property (retain, nonatomic) NSString *syncStatusMacToolTipText;
@property (retain, nonatomic) NSString *lastSyncedDateString;
@property (retain, nonatomic) NSString *syncStatusFooterSubstringForHyperlink;
@property (nonatomic, getter=isSyncAvailable) BOOL syncAvailable;

- (id)init;
- (void).cxx_destruct;

@end
