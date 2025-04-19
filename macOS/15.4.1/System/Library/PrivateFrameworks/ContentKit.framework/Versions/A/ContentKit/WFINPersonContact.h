@class INPerson;

@interface WFINPersonContact : WFContact

@property (retain, nonatomic) INPerson *person;

+ (BOOL)supportsSecureCoding;
+ (id)contactWithPerson:(id)a0;
+ (id)objectWithWFSerializedRepresentation:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithINPerson:(id)a0;
- (id)INPersonRepresentation;
- (id)wfName;
- (id)wfSerializedRepresentation;

@end
