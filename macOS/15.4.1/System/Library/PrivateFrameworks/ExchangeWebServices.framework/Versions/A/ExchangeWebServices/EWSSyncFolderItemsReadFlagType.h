@class NSString, EWSItemIdType;

@interface EWSSyncFolderItemsReadFlagType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSItemIdType *ItemId;
@property (nonatomic) BOOL IsRead;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
