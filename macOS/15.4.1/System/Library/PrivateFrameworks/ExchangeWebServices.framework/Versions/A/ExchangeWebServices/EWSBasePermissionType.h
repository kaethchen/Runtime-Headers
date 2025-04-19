@class NSString, EWSUserIdType;

@interface EWSBasePermissionType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSUserIdType *UserId;
@property (nonatomic) BOOL CanCreateItems;
@property (nonatomic) BOOL CanCreateSubFolders;
@property (nonatomic) BOOL IsFolderOwner;
@property (nonatomic) BOOL IsFolderVisible;
@property (nonatomic) BOOL IsFolderContact;
@property (nonatomic) long long EditItems;
@property (nonatomic) long long DeleteItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
