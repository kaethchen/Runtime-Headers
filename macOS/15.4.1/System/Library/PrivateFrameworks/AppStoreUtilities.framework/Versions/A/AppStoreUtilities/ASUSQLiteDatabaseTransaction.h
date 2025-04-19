@class NSString, ASUSQLiteConnection;

@interface ASUSQLiteDatabaseTransaction : ASUSQLiteDatabaseSession <ASUSQLiteDatabaseTransaction>

@property (readonly) ASUSQLiteConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
