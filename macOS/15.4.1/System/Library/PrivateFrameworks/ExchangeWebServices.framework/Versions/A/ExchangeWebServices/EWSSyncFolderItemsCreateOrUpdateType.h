@class NSString, EWSItemType;

@interface EWSSyncFolderItemsCreateOrUpdateType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSItemType *Item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
