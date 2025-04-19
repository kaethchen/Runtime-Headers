@class NSDictionary, NSUUID;

@interface HMDAccessoryReachabilityElectionParameter : HMFObject

@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, getter=isReachable) BOOL reachable;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)attributeDescriptions;
- (id)initWithIdentifier:(id)a0 isReachable:(BOOL)a1;

@end
