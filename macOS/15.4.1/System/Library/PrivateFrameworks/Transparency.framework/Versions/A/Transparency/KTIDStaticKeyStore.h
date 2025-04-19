@class NSString;

@interface KTIDStaticKeyStore : NSObject <KTIDStaticKeyStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContact:(id)a0;
- (id)findByContact:(id)a0 error:(id *)a1;
- (id)findKeyByHandle:(id)a0 error:(id *)a1;
- (BOOL)removeEntryByKDID:(id)a0 error:(id *)a1;
- (BOOL)updateStaticKeyEntry:(id)a0 contact:(id)a1 error:(id *)a2;
- (id)mappings:(id)a0 error:(id *)a1;
- (BOOL)addMapping:(id)a0 forKTId:(id)a1 error:(id *)a2;
- (BOOL)addStaticKeyEntry:(id)a0 contactServerPath:(id)a1 contactIdentifier:(id)a2 error:(id *)a3;
- (id)findByContactIdentifier:(id)a0 error:(id *)a1;
- (id)findByIdentifier:(id)a0 error:(id *)a1;
- (id)findKeyByContactsServerPath:(id)a0 contactIdentifier:(id)a1 error:(id *)a2;
- (id)listKTID:(id *)a0;
- (BOOL)removeEntryByContact:(id)a0 error:(id *)a1;
- (BOOL)removeEntryByContactIdentifier:(id)a0 error:(id *)a1;
- (BOOL)removeMapping:(id)a0 forKTId:(id)a1 error:(id *)a2;
- (BOOL)resetCloudKit:(id *)a0;
- (BOOL)setContactServerPath:(id)a0 forKTId:(id)a1 error:(id *)a2;
- (BOOL)setErrorCode:(int)a0 forMapping:(id)a1 error:(id *)a2;
- (BOOL)setupCloudSchema:(BOOL)a0 error:(id *)a1;
- (BOOL)triggerSync:(id *)a0;
- (BOOL)updateStaticKeyEntry:(id)a0 contactServerPath:(id)a1 contactIdentifier:(id)a2 mappings:(id)a3 error:(id *)a4;
- (id)validateByContact:(id)a0 error:(id *)a1;
- (id)validateByContactIdentifier:(id)a0 error:(id *)a1;
- (id)validateByIdentifier:(id)a0 error:(id *)a1;

@end
