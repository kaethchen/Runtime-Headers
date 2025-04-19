@class NSArray, NSString;

@interface EWSItemResponseShapeType : NSObject <XSDefinitionProvider>

@property (nonatomic) long long BaseShape;
@property (nonatomic) BOOL IncludeMimeContent;
@property (nonatomic) long long BodyType;
@property (copy, nonatomic) NSArray *AdditionalProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
