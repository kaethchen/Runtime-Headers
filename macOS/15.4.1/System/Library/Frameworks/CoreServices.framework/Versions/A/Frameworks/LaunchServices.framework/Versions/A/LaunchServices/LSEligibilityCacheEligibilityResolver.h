@class NSString;

@interface LSEligibilityCacheEligibilityResolver : NSObject <LSDomainEligibilityResolver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eligibilityForDomain:(unsigned long long)a0 error:(id *)a1;

@end
