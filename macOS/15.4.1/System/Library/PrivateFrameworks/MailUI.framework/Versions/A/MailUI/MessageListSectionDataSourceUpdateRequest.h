@class NSString, EMMessageList;

@interface MessageListSectionDataSourceUpdateRequest : NSObject <EFPubliclyDescribable>

@property (readonly, nonatomic) NSString *section;
@property (readonly, nonatomic) EMMessageList *messageList;
@property (readonly, nonatomic) BOOL shouldClearSnapshot;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
