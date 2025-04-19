@class NSString, NSDictionary, NSArray;

@interface WPStorageAccessPromptQuirk : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *domainPairings;
@property (readonly, nonatomic) NSDictionary *quirkDomains;
@property (readonly, nonatomic) NSArray *triggerPages;
@property (readonly, nonatomic) BOOL isValid;

- (id)description;
- (void).cxx_destruct;
- (id)describeQuirkDomains;
- (id)initWithName:(id)a0 withDomainData:(id)a1;
- (id)initWithName:(id)a0 withDomainPairings:(id)a1;

@end
