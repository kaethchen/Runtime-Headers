@class NSUUID;

@interface HKBaseUserDomainConceptSemanticIdentifier : HKUserDomainConceptSemanticIdentifier

@property (readonly, copy, nonatomic) NSUUID *UUID;

+ (id)semanticIdentifierWithComponents:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)stringValue;
- (id)initWithTypeIdentifier:(id)a0;
- (id)initWithUUID:(id)a0;

@end
