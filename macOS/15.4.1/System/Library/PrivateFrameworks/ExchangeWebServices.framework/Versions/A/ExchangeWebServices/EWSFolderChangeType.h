@class NSArray, NSString, EWSBaseFolderIdType;

@interface EWSFolderChangeType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSBaseFolderIdType *FolderId;
@property (copy, nonatomic) NSArray *Updates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
