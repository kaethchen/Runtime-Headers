@class NSString;

@interface EWSEffectiveRightsType : NSObject <XSDefinitionProvider>

@property (nonatomic) BOOL CreateAssociated;
@property (nonatomic) BOOL CreateContents;
@property (nonatomic) BOOL CreateHierarchy;
@property (nonatomic) BOOL Delete;
@property (nonatomic) BOOL Modify;
@property (nonatomic) BOOL Read;
@property (nonatomic) BOOL ViewPrivateItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;


@end
