@class CNContactStore, CNContact;

@interface CNUIContainerFetchDescription : NSObject

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNContactStore *mainContactStore;
@property (readonly, nonatomic) CNContactStore *alternateContactStore;
@property (readonly, nonatomic) BOOL fetchAsynchronously;
@property (readonly, nonatomic) BOOL fetchingDuringLaunch;

+ (id)fetchDescriptionWithContact:(id)a0 contactStore:(id)a1 alternateContactStore:(id)a2 fetchAsynchronously:(BOOL)a3 fetchingDuringLaunch:(BOOL)a4;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFetchDescriptionWithContact:(id)a0 contactStore:(id)a1 alternateContactStore:(id)a2 fetchAsynchronously:(BOOL)a3 fetchingDuringLaunch:(BOOL)a4;

@end
