@class NSString;

@interface ResponsivenessHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (id)init;
- (int)configureInstance:(id)a0;
- (BOOL)noteSymptom:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;

@end
