@class NSString, WBTabGroupManager, NSArray;

@interface WBSProfileStartPageManagerStorage : NSObject <WBTabGroupManagerObserver, WBSStartPageSectionManagerStorage>

@property (readonly, nonatomic) WBTabGroupManager *tabGroupManager;
@property (readonly, copy, nonatomic) NSString *profileIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *startPageSectionDescriptors;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProfileIdentifier:(id)a0 tabGroupManager:(id)a1;
- (void)tabGroupManager:(id)a0 didUpdateProfileWithIdentifier:(id)a1 difference:(id)a2;
- (id)startPageSectionsDataRepresentation;

@end
