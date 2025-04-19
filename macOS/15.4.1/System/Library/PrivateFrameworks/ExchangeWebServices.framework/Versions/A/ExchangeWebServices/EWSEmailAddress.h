@class NSString;

@interface EWSEmailAddress : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSString *Name;
@property (copy, nonatomic) NSString *Address;
@property (copy, nonatomic) NSString *RoutingType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
