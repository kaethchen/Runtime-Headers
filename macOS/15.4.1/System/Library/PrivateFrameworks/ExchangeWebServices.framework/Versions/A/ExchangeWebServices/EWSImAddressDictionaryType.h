@class NSArray, NSString;

@interface EWSImAddressDictionaryType : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSArray *Entry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
