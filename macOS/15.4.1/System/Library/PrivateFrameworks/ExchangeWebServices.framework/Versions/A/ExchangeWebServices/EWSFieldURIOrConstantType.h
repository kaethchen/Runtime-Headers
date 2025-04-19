@class NSString;

@interface EWSFieldURIOrConstantType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) id Item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
