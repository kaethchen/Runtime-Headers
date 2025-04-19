@class NSString;

@interface SOAPText : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSString *stringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;

@end
