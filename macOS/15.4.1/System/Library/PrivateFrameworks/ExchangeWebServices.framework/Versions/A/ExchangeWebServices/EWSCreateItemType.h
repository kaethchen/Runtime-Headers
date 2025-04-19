@class NSArray, EWSTargetFolderIdType;

@interface EWSCreateItemType : EWSBaseRequestType

@property (retain, nonatomic) EWSTargetFolderIdType *SavedItemFolderId;
@property (copy, nonatomic) NSArray *Items;
@property (nonatomic) long long MessageDisposition;
@property (nonatomic) long long SendMeetingInvitations;

+ (id)definition;

- (void).cxx_destruct;

@end
