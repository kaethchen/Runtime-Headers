@class NSUUID, HDAssociatableObjectReference, NSData, NSDate;

@interface _HDAssociationInsertionJournalEntry : HDJournalEntry

@property (readonly, nonatomic) NSUUID *parentUUID;
@property (readonly, nonatomic) NSData *childUUIDsData;
@property (readonly, nonatomic) long long provenance;
@property (readonly, nonatomic) long long syncIdentity;
@property (readonly, nonatomic) BOOL enforceSameSource;
@property (readonly, nonatomic) HDAssociatableObjectReference *destinationSubObjectReference;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL deleted;
@property (readonly, nonatomic) NSDate *creationDate;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParentUUID:(id)a0 childUUIDsData:(id)a1 provenance:(long long)a2 syncIdentity:(long long)a3 type:(unsigned long long)a4 deleted:(BOOL)a5 creationDate:(id)a6 destinationSubObjectReference:(id)a7 enforceSameSource:(BOOL)a8;

@end
