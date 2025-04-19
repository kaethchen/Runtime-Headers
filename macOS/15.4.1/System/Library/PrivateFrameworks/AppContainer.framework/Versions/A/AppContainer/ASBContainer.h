@class NSString, NSDictionary, NSURL, NSData, NSMutableDictionary, ASBContainerACL;

@interface ASBContainer : NSObject {
    NSMutableDictionary *_metadata;
    ASBContainerACL *_acl;
}

@property (retain, nonatomic) NSString *containerIdentifier;
@property (setter=setHasLSDataContainerPersonalityInfo:) BOOL hasLSDataContainerPersonalityInfo;
@property (readonly) NSString *homeDirPath;
@property (readonly) NSString *personaVolume;
@property (readonly) NSString *containerPath;
@property (readonly) NSString *dataPath;
@property (readonly) NSURL *baseURL;
@property (readonly) NSURL *dataURL;
@property (readonly) NSData *sandboxProfileData;
@property (readonly) NSDictionary *sandboxProfileDataValidationInfo;

+ (id)containerURLForAppSigningId:(id)a0;
+ (id)CM_containerURLForIdentifier:(id)a0 ofClass:(unsigned long long)a1 persona:(id)a2 error:(id *)a3;
+ (BOOL)CM_forContainerOfClass:(unsigned long long)a0 persona:(id)a1 onBehalfOf:(struct { unsigned int x0[8]; } *)a2 queryFlags:(unsigned long long)a3 error:(id *)a4 syncPerformBlock:(id /* block */)a5;
+ (id)containerForAppSigningId:(id)a0 error:(id *)a1;
+ (BOOL)CM_forContainersOfClass:(unsigned long long)a0 persona:(id)a1 onBehalfOf:(struct { unsigned int x0[8]; } *)a2 queryFlags:(unsigned long long)a3 error:(id *)a4 syncIterateWithBlock:(id /* block */)a5;
+ (BOOL)CM_forContainerAtURL:(id)a0 error:(id *)a1 syncPerformBlock:(id /* block */)a2;
+ (BOOL)CM_forContainerWithIdentifier:(id)a0 ofClass:(unsigned long long)a1 persona:(id)a2 queryFlags:(unsigned long long)a3 error:(id *)a4 syncPerformBlock:(id /* block */)a5;
+ (id)_CM_currentPersonaUniqueStringForContainer;
+ (BOOL)_CM_queryContainersWithIdentifier:(id)a0 ofClass:(unsigned long long)a1 persona:(id)a2 onBehalfOf:(struct container_client { } *)a3 queryFlags:(unsigned long long)a4 error:(id *)a5 syncPerformBlock:(id /* block */)a6;
+ (id)containerForAppSigningId:(id)a0 andHomeDirectory:(id)a1 error:(id *)a2;
+ (id)containerForApplicationAtURL:(id)a0 error:(id *)a1;
+ (id)containerForApplicationAtURL:(id)a0 withHomeDirectory:(id)a1 error:(id *)a2;
+ (id)containerForCodeIdentity:(id)a0 andHomeDirectory:(id)a1 error:(id *)a2;
+ (id)containerIdentifierForAppSigningId:(id)a0;
+ (id)containerURLForAppSigningId:(id)a0 inBaseDirectory:(id)a1;
+ (id)containerURLForApplicationAtURL:(id)a0 error:(id *)a1;
+ (id)containerURLForApplicationAtURL:(id)a0 withHomeDirectory:(id)a1 error:(id *)a2;
+ (id)containerURLForCodeIdentity:(id)a0 andHomeDirectory:(id)a1 error:(id *)a2;
+ (id)currentPersonaOrHomeDirectory;
+ (id)currentPersonaOrHomeDirectoryOverride:(id)a0;
+ (id)currentPersonaVolume;

- (void).cxx_destruct;
- (id)baseURL;
- (id)dataURL;
- (id)initWithApplicationAtURL:(id)a0 error:(id *)a1;
- (id)rebasedFileURL:(id)a0;
- (BOOL)hasLSDataContainerPersonalityInfo;
- (id)initWithAppSigningId:(id)a0 andHomeDirectory:(id)a1 error:(id *)a2;
- (id)initWithApplicationAtURL:(id)a0 andHomeDirectory:(id)a1 error:(id *)a2;
- (id)initWithCodeIdentity:(id)a0 andHomeDirectory:(id)a1 error:(id *)a2;
- (id)initWithHomeDirectory:(id)a0 andContainerPath:(id)a1 error:(id *)a2;
- (id)initWithHomeDirectory:(id)a0 andContainerURL:(id)a1 error:(id *)a2;
- (void)recordPermissionsError:(id *)a0 withAuxString:(id)a1 writePath:(id)a2 readPath:(id)a3;
- (id)requirementACL;
- (id)sandboxProfileData;
- (id)sandboxProfileDataValidationInfo;
- (id)sanitizedPath:(id)a0;
- (BOOL)setError:(id *)a0 message:(id)a1 forPath:(id)a2 withDomain:(id)a3 code:(long long)a4;

@end
