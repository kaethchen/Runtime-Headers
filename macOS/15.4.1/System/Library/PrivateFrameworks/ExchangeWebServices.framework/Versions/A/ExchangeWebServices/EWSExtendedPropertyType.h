@class EWSPathToExtendedFieldType, NSString;

@interface EWSExtendedPropertyType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSPathToExtendedFieldType *ExtendedFieldURI;
@property (retain, nonatomic) id Item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
