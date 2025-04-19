@class NSArray;

@interface CTXPCIsSimMatchingRequest : CTXPCSubscriptionContextRequest

@property (retain, nonatomic) NSArray *carrierDescriptors;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)requiredEntitlement;
- (id)initWithDescriptor:(id)a0 carrierDescriptors:(id)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
