@class REMAccount;

@interface REMAccountTemplatesContext : NSObject

@property (retain, nonatomic) REMAccount *account;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)fetchTemplatesWithError:(id *)a0;

@end
