@class NSString;

@interface RBLaunchdInterface : NSObject <RBLaunchdInterfacing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;

- (id)copyJobWithLabel:(id)a0 domain:(id)a1;
- (id)currentDomain;
- (id)copyJobWithPid:(int)a0;
- (id)copyJobsManagedBy:(id)a0 error:(out id *)a1;
- (id)domainForPid:(int)a0;
- (id)domainForUser:(unsigned int)a0;
- (id)propertiesForJob:(id)a0 error:(out id *)a1;
- (id)propertiesForPid:(int)a0 error:(out id *)a1;
- (id)submitExtension:(id)a0 overlay:(id)a1 domain:(id)a2 error:(out id *)a3;
- (id)forJob:(id)a0 createInstance:(unsigned char[16])a1 properties:(id)a2 error:(out id *)a3;
- (id)instancePropertiesFromOverlay:(id)a0;
- (id)jobWithPlist:(id)a0;
- (id)jobWithPlist:(id)a0 domain:(id)a1;

@end
