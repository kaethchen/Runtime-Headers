@class NSString, NSArray, ITLibModelKind;
@protocol ITLocalLibraryIdentifiers, ITUniversalStoreIdentifiers;

@interface ITLibIdentifierSet : NSObject <ITMutableLocalLibraryIdentifiers, ITMutableUniversalStoreIdentifiers, ITLibMutableIdentifierSet>

@property (readonly, nonatomic) ITLibModelKind *modelKind;
@property (readonly, nonatomic) id<ITLocalLibraryIdentifiers> library;
@property (readonly, nonatomic) id<ITUniversalStoreIdentifiers> universalStore;
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
- (void)setLibraryIdentifiersWithBlock:(id /* block */)a0;
- (void)clearLibraryIdentifiers;
- (void)clearUniversalStoreIdentifiers;
- (id)initWithModelKind:(id)a0 block:(id /* block */)a1;
- (void)setUniversalStoreIdentifiersWithBlock:(id /* block */)a0;

@end
