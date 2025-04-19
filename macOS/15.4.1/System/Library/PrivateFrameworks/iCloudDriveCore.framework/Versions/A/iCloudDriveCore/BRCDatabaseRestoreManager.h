@class NSURL, NSString;

@interface BRCDatabaseRestoreManager : NSObject <BRDatabaseRestoreManagerProtocol>

@property (retain, nonatomic) NSURL *userURL;
@property (retain, nonatomic) NSURL *clientDatabaseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithUserURL:(id)a0;
- (void)restoreWithCompletionBlock:(id /* block */)a0;

@end
