@class NSString;

@interface EWSPathToExtendedFieldType : EWSBasePathToElementType <XSDefinitionProvider>

@property (nonatomic) long long DistinguishedPropertySetId;
@property (nonatomic) long long PropertyId;
@property (nonatomic) BOOL PropertyIdSpecified;
@property (copy, nonatomic) NSString *PropertyName;
@property (copy, nonatomic) NSString *PropertySetId;
@property (copy, nonatomic) NSString *PropertyTag;
@property (nonatomic) long long PropertyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
