@class NSString;

@interface EWSInternetHeaderType : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSString *HeaderName;
@property (copy, nonatomic) NSString *stringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
