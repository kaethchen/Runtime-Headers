@class NSString, NSArray;

@interface PKAuxiliaryCapabilityUnregisteredRequirements : NSObject

@property (readonly, nonatomic) NSString *dpanIdentifier;
@property (readonly, nonatomic) NSArray *requirementIdentifiers;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
