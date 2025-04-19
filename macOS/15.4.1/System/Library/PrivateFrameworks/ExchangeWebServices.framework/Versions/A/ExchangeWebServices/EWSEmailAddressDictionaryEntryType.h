@class NSString;

@interface EWSEmailAddressDictionaryEntryType : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSString *Key;
@property (copy, nonatomic) NSString *contentString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
