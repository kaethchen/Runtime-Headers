@class NSString;

@interface EWSDelegatePermissionsType : NSObject <XSDefinitionProvider>

@property (nonatomic) long long CalendarFolderPermissionLevel;
@property (nonatomic) long long TasksFolderPermissionLevel;
@property (nonatomic) long long InboxFolderPermissionLevel;
@property (nonatomic) long long ContactsFolderPermissionLevel;
@property (nonatomic) long long NotesFolderPermissionLevel;
@property (nonatomic) long long JournalFolderPermissionLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;


@end
