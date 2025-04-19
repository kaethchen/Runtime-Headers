@class EMGroupedSenderCollectionItemID, EMThreadScope;
@protocol ECEmailAddressConvertible;

@interface EMGroupedSenderObjectID : EMObjectID

@property (readonly, nonatomic) EMGroupedSenderCollectionItemID *collectionItemID;
@property (readonly, nonatomic) long long businessID;
@property (readonly, copy, nonatomic) id<ECEmailAddressConvertible> emailAddress;
@property (readonly, nonatomic) EMThreadScope *threadScope;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBusinessID:(long long)a0 threadScope:(id)a1;
- (id)initWithCollectionItemID:(id)a0 threadScope:(id)a1;
- (id)initWithCollectionItemID:(id)a0 predicate:(id)a1 mailboxTypeResolver:(id)a2;

@end
