@class NSString, NSDictionary;

@interface JEHashTreatmentAction : JETreatmentAction

@property (retain, nonatomic) NSString *namespace;
@property (retain, nonatomic) NSDictionary *configuration;
@property (retain, nonatomic) NSString *topic;

- (void).cxx_destruct;
- (id)initWithField:(id)a0 configuration:(id)a1 topic:(id)a2;

@end
