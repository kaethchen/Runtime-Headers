@class NSString, NSArray, NSURL, ABCDContainer, NSNumber;

@interface CNTestAccountDescription : NSObject <CNAccountDescription>

@property (copy) NSString *identifier;
@property (retain) NSNumber *dsid;
@property BOOL isEnabled;
@property BOOL isPersistent;
@property (copy) NSURL *baseURL;
@property (retain) NSURL *persistentStoreURL;
@property (retain) ABCDContainer *containerRepresentation;
@property BOOL isChildAccount;
@property (copy) NSArray *childAccounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
