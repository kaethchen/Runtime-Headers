@class NSString, EWSBasePathToElementType;

@interface EWSFieldOrderType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSBasePathToElementType *Path;
@property (nonatomic) long long Order;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
