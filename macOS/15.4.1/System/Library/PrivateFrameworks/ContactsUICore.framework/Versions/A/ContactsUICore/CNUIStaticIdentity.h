@class KTIDStaticKeyStoreEntry, CNContact;

@interface CNUIStaticIdentity : NSObject

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) KTIDStaticKeyStoreEntry *storeEntry;

+ (id)ktStore;
+ (BOOL)addStaticKeyWithPublicIDString:(id)a0 contact:(id)a1;
+ (id)findStoreEntryByContact:(id)a0;
+ (BOOL)isHandleInStore:(id)a0;
+ (BOOL)isValidStaticKeyString:(id)a0;
+ (id)makeKTPublicIDWithString:(id)a0;
+ (BOOL)removeAccountKeyFromContact:(id)a0;

- (void).cxx_destruct;
- (id)initWithContact:(id)a0;
- (id)verificationCode;
- (BOOL)isHandleInStore:(id)a0;

@end
