@class NSNumber, NSString, NSArray;

@interface ASDRestoreDemotedApplicationsRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSNumber *accountID;
@property (readonly, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSArray *bundleIDs;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0 appleID:(id)a1;
- (id)initWithBundleIDs:(id)a0;

@end
