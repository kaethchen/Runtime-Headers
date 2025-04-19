@class EWSEffectiveRightsType, NSString, NSArray, EWSFolderIdType;

@interface EWSBaseFolderType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSFolderIdType *FolderId;
@property (retain, nonatomic) EWSFolderIdType *ParentFolderId;
@property (copy, nonatomic) NSString *FolderClass;
@property (copy, nonatomic) NSString *DisplayName;
@property (nonatomic) long long TotalCount;
@property (nonatomic) BOOL TotalCountSpecified;
@property (nonatomic) long long ChildFolderCount;
@property (nonatomic) BOOL ChildFolderCountSpecified;
@property (retain, nonatomic) EWSEffectiveRightsType *EffectiveRights;
@property (copy, nonatomic) NSArray *ExtendedProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
