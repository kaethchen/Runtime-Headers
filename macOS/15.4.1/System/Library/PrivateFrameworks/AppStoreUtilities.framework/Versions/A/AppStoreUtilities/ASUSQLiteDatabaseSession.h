@class NSString, ASUSQLiteConnection;

@interface ASUSQLiteDatabaseSession : NSObject <ASUSQLiteDatabaseSession>

@property (readonly) ASUSQLiteConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;

@end
