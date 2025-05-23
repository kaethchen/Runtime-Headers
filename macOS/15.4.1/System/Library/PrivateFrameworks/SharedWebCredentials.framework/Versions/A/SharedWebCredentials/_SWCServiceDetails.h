@class NSNumber, _SWCServiceSpecifier;

@interface _SWCServiceDetails : NSObject <SWCRedactedDescription, NSSecureCoding> {
    struct SWCFields { unsigned char userApproval : 2; unsigned char siteOrFrameworkApproval : 2; unsigned char updating : 1; unsigned char systemApplication : 1; unsigned char enabledConfiguration : 2; unsigned char enterpriseManaged : 1; unsigned char provenance : 3; char relativeOrder; } _fields;
}

@property (class, readonly) BOOL currentProcessHasReadAccess;
@property (class, readonly) BOOL currentProcessHasWriteAccess;
@property (class, readonly, getter=isDeveloperModeEnabled) BOOL developerModeEnabled;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isApproved) BOOL approved;
@property (nonatomic) unsigned char userApprovalState;
@property (readonly) unsigned char siteApprovalState;
@property (readonly) unsigned char frameworkApprovalState;
@property (readonly, getter=isUpdating) BOOL updating;
@property (readonly, getter=isSystemApplication) BOOL systemApplication;
@property (readonly, getter=wasReadFromDisk) BOOL readFromDisk;
@property (readonly, getter=wasProvidedByAdditionalServiceDetailsProvider) BOOL providedByAdditionalServiceDetailsProvider;
@property (readonly, getter=isAlwaysEnabled) BOOL alwaysEnabled;
@property (readonly, getter=isEnabledByDefault) NSNumber *enabledByDefault;
@property (readonly, getter=isEnterpriseManaged) BOOL enterpriseManaged;
@property (readonly, getter=isWatchKitExtension) BOOL watchKitExtension;
@property (readonly, getter=isSystemPlaceholder) BOOL systemPlaceholder;
@property (readonly) char modeOfOperation;
@property (readonly) _SWCServiceSpecifier *serviceSpecifier;

+ (id)new;
+ (BOOL)auditTokenHasReadAccess:(struct { unsigned int x0[8]; })a0;
+ (BOOL)auditTokenHasWriteAccess:(struct { unsigned int x0[8]; })a0;
+ (id)serviceDetailsWithServiceSpecifier:(id)a0 URLComponents:(id)a1 limit:(unsigned long long)a2 auditToken:(struct { unsigned int x0[8]; })a3 error:(id *)a4;
+ (id)serviceDetailsWithServiceSpecifier:(id)a0 URLComponents:(id)a1 limit:(unsigned long long)a2 error:(id *)a3;
+ (id)serviceDetailsWithServiceSpecifier:(id)a0 error:(id *)a1;
+ (void)synchronizeWithCompletionHandler:(id /* block */)a0;
+ (id)_serviceDetailsWithServiceSpecifier:(id)a0 URLComponents:(id)a1 limit:(unsigned long long)a2 callerAuditToken:(const struct { unsigned int x0[8]; } *)a3 error:(id *)a4;
+ (id)serviceDetailsWithServiceSpecifier:(id)a0 limit:(unsigned long long)a1 auditToken:(struct { unsigned int x0[8]; })a2 error:(id *)a3;
+ (id)serviceDetailsWithServiceSpecifier:(id)a0 limit:(unsigned long long)a1 error:(id *)a2;
+ (void)setAdditionalServiceDetailsForApplicationIdentifiers:(id)a0 usingContentsOfDictionary:(id)a1 completionHandler:(id /* block */)a2;
+ (void)setDeveloperModeEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)waitForSiteApprovalWithCompletionHandler:(id /* block */)a0;
- (id)_initWithServiceSpecifier:(id)a0 fields:(const struct SWCFields { unsigned char x0 : 2; unsigned char x1 : 2; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 2; unsigned char x5 : 1; unsigned char x6 : 3; char x7; } *)a1;
- (BOOL)setUserApprovalState:(unsigned char)a0 error:(id *)a1;

@end
