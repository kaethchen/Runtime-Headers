@class CDPContext;

@interface CDPDAccount : NSObject

@property (readonly, nonatomic) CDPContext *context;
@property (nonatomic) BOOL hasDisabledKeychainExplicitly;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)isOTEnabledForContext:(id)a0;
- (BOOL)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1;
- (unsigned long long)recoveryContactCountForAltDSID:(id)a0;
- (BOOL)_iCDPStatusFromNetworkUsing:(struct _PCSIdentitySetData { } *)a0 options:(struct __CFDictionary { } *)a1 error:(struct __CFError { } *)a2;

@end
