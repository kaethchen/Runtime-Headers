@class CTLazuliCapabilitiesInformation;

@interface CTXPCReadCachedCapabilitiesResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTLazuliCapabilitiesInformation *capabilitiesInfo;

+ (id)allowedClassesForArguments;

- (id)initWithCapabilitiesInfo:(id)a0;

@end
