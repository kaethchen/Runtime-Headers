@class NSArray, EWSTargetFolderIdType;

@interface EWSUpdateItemType : EWSBaseRequestType

@property (retain, nonatomic) EWSTargetFolderIdType *SavedItemFolderId;
@property (copy, nonatomic) NSArray *ItemChanges;
@property (nonatomic) long long ConflictResolution;
@property (nonatomic) long long MessageDisposition;
@property (nonatomic) long long SendMeetingInvitationsOrCancellations;

+ (id)definition;

- (void).cxx_destruct;

@end
