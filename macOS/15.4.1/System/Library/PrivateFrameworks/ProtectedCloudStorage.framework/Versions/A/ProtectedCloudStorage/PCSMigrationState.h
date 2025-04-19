@interface PCSMigrationState : NSObject

@property BOOL done;
@property struct _PCSMigrationStep { } *firstStep;
@property struct _PCSMigrationStep { } *currentStep;
@property struct __CFDictionary { } *initialOptions;
@property struct __CFDictionary { } *options;
@property struct __PCSLogContext { } *log;
@property struct _PCSIdentitySetData { } *set;
@property struct _PCSIdentityData { } *escrowIdentity;
@property struct __CFData { } *newHSMContent;
@property struct __CFDictionary { } *metadata;
@property struct __CFData { } *classicContent;
@property struct __CFDictionary { } *stableMetadata;
@property struct __CFDictionary { } *oldRegistry;
@property struct __CFString { } *type;
@property struct __CFArray { } *missingFromRegistry;
@property struct __CFArray { } *removeFromRegistry;
@property struct __CFArray { } *limitLocalStoring;
@property BOOL iCDP;
@property BOOL iCDPArmed;
@property BOOL iCDPPlesio;
@property BOOL iCDPHSM;
@property BOOL iCDPHSMArmed;
@property BOOL iCDPHSMWalrus;
@property BOOL iCDPHSMPlesio;
@property BOOL dropHSM;
@property BOOL restoreHSM;
@property BOOL needPassword;
@property BOOL requireIdentityInHSM;
@property BOOL triggerUpdate;
@property BOOL newIdentity;
@property BOOL modified;
@property unsigned int numberIdentityMissing;
@property BOOL brokenEncryptedMetadatakeys;
@property BOOL restart;
@property unsigned int restartCounter;
@property BOOL escrowMissing;
@property struct __CFData { } *escrowMergeNeeded;

- (void)dealloc;
- (id)description;
- (void)softReset;
- (BOOL)boolOption:(struct __CFString { } *)a0;
- (void)clearMetadata;
- (void)clearOldRegistry;
- (void)clearSet;
- (void)clearStableMetadata;

@end
