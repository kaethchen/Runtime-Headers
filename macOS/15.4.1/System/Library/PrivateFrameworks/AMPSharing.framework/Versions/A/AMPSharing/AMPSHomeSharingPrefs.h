@class AMPLSharingClient, NSString;

@interface AMPSHomeSharingPrefs : NSObject

@property (retain, nonatomic) AMPLSharingClient *client;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSString *userName;
@property (readonly, nonatomic) BOOL updatePlayCounts;

- (void).cxx_destruct;
- (id)initWithClient:(id)a0;
- (void)disableHomeSharingWithReply:(id /* block */)a0;
- (void)enableHomeSharing:(id)a0 forComputerID:(id)a1 forUserID:(unsigned long long)a2 forUserName:(id)a3 withReply:(id /* block */)a4;
- (void)setUpdatePlayCounts:(BOOL)a0 withReply:(id /* block */)a1;
- (void)updatePrefs:(BOOL)a0 withUserName:(id)a1 updatePlayCounts:(BOOL)a2;

@end
