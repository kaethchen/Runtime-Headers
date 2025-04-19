@class EWSFolderIdType, NSDateComponents;

@interface EWSBaseObjectChangedEventType : EWSBaseNotificationEventType

@property (retain, nonatomic) NSDateComponents *TimeStamp;
@property (retain, nonatomic) id ItemOrFolderId;
@property (retain, nonatomic) EWSFolderIdType *ParentFolderId;

+ (id)definition;

- (void).cxx_destruct;

@end
