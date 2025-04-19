@class CNContactStore, NSString, NSArray;

@interface CNUIContactFetchDescription : NSObject

@property (readonly, nonatomic) CNContactStore *mainContactStore;
@property (readonly, nonatomic) CNContactStore *alternateContactStore;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) BOOL unified;
@property (readonly, nonatomic) NSArray *keysToFetch;
@property (readonly, nonatomic) BOOL fetchAsynchronously;
@property (readonly, nonatomic) BOOL fetchingDuringLaunch;

+ (id)fetchDescriptionWithContactIdentifier:(id)a0;
+ (id)fetchDescriptionWithContactIdentifier:(id)a0 contactStore:(id)a1;
+ (id)fetchDescriptionWithContactIdentifier:(id)a0 contactStore:(id)a1 alternateContactStore:(id)a2 unified:(BOOL)a3 keysToFetch:(id)a4 fetchAsynchronously:(BOOL)a5 fetchingDuringLaunch:(BOOL)a6;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContactIdentifier:(id)a0 contactStore:(id)a1 alternateContactStore:(id)a2 unified:(BOOL)a3 keysToFetch:(id)a4 fetchAsynchronously:(BOOL)a5 fetchingDuringLaunch:(BOOL)a6;

@end
