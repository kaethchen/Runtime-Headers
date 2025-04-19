@class NSString, EWSBaseFolderIdType;

@interface EWSTargetFolderIdType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSBaseFolderIdType *BaseFolderId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
