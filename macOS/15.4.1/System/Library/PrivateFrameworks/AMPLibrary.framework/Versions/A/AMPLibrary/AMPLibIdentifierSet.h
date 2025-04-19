@class NSString, NSArray, AMPLibModelKind;
@protocol AMPLocalLibraryIdentifiers, AMPUniversalStoreIdentifiers;

@interface AMPLibIdentifierSet : NSObject <AMPMutableLocalLibraryIdentifiers, AMPMutableUniversalStoreIdentifiers, AMPLibMutableIdentifierSet, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AMPLibModelKind *modelKind;
@property (readonly, nonatomic) id<AMPLocalLibraryIdentifiers> library;
@property (readonly, nonatomic) id<AMPUniversalStoreIdentifiers> universalStore;
@property (nonatomic) unsigned long long persistentID;
@property (nonatomic) unsigned long long containedPersistentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long adamID;
@property (copy, nonatomic) NSArray *formerAdamIDs;
@property (copy, nonatomic) NSString *globalPlaylistID;
@property (nonatomic) unsigned long long purchasedAdamID;
@property (nonatomic) unsigned long long reportingAdamID;
@property (nonatomic) unsigned long long subscriptionAdamID;
@property (copy, nonatomic) NSString *universalCloudLibraryID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setLibraryIdentifiersWithBlock:(id /* block */)a0;
- (void)clearLibraryIdentifiers;
- (void)clearUniversalStoreIdentifiers;
- (id)initWithModelKind:(id)a0 block:(id /* block */)a1;
- (void)setUniversalStoreIdentifiersWithBlock:(id /* block */)a0;

@end
