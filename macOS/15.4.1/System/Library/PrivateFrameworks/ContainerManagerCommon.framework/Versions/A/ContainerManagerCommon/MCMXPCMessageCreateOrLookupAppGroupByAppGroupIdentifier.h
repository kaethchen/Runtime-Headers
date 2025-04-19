@class NSString;

@interface MCMXPCMessageCreateOrLookupAppGroupByAppGroupIdentifier : MCMXPCMessageBase <MCMParametersCreateOrLookupAppGroupByAppGroupIdentifier>

@property (readonly, nonatomic) NSString *appGroupIdentifier;
@property (readonly, nonatomic) unsigned int expectedPersonaKernelID;

- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
