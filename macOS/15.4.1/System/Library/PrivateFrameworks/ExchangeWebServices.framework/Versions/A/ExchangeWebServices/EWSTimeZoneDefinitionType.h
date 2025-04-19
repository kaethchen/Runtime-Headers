@class NSString;

@interface EWSTimeZoneDefinitionType : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSString *Id;
@property (copy, nonatomic) NSString *Name;
@property (readonly, copy, nonatomic) NSString *StandardTimeZoneId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)definition;

- (void).cxx_destruct;
- (id)initWithStandardTimeZoneId:(id)a0;

@end
