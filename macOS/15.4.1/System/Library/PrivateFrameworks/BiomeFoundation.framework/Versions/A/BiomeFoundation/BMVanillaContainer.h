@class NSString;

@interface BMVanillaContainer : BMResourceContainer <BMPersonaCachedResourceContainer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerForPersonaIdentifier:(id)a0 error:(id *)a1;

- (unsigned char)containerType;

@end
