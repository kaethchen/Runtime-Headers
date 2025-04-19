@class NSString;

@interface XSNullDefinition : XSDefinition <XSDefinitionProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (Class)typeForName:(id)a0;

@end
