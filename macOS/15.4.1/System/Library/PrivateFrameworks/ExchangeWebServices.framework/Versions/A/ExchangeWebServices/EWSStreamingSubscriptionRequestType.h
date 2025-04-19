@class NSArray, NSString;

@interface EWSStreamingSubscriptionRequestType : NSObject <XSDefinitionProvider>

@property (nonatomic) BOOL SubscribeToAllFolders;
@property (nonatomic) BOOL SubscribeToAllFoldersIsSpecified;
@property (copy, nonatomic) NSArray *FolderIds;
@property (copy, nonatomic) NSArray *EventTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
