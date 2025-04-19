@class CNContactStore, NSString, CNContact;

@interface CNContactLikenessContactStoreMutator : NSObject <CNContactLikenessMutator>

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateContact:(id)a0 withLikeness:(id)a1;

- (void).cxx_destruct;
- (id)addNewLikeness:(id)a0;
- (id)deleteLikeness:(id)a0;
- (id)updateLikeness:(id)a0;
- (id)initWithContactStore:(id)a0 contact:(id)a1;
- (id)setLikenessAsCurrent:(id)a0;

@end
