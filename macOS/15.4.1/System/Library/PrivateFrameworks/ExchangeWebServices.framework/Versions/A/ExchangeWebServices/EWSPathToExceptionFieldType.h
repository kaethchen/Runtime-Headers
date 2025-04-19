@class NSString;

@interface EWSPathToExceptionFieldType : EWSBasePathToElementType <XSDefinitionProvider>

@property (nonatomic) long long FieldURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;


@end
