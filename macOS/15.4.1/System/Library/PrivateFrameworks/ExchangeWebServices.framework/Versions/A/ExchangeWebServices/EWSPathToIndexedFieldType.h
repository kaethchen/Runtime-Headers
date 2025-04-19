@class NSString;

@interface EWSPathToIndexedFieldType : EWSBasePathToElementType <XSDefinitionProvider>

@property (copy, nonatomic) NSString *FieldIndex;
@property (nonatomic) long long FieldURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
