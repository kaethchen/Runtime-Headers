@class NSString;

@interface EWSPhysicalAddressDictionaryEntryType : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSString *Street;
@property (copy, nonatomic) NSString *City;
@property (copy, nonatomic) NSString *State;
@property (copy, nonatomic) NSString *CountryOrRegion;
@property (copy, nonatomic) NSString *PostalCode;
@property (copy, nonatomic) NSString *Key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
