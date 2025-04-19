@class NSArray, NSMutableArray;

@interface SUOSUServiceClientManager : NSObject

@property (retain) NSMutableArray *clients;
@property (retain) NSMutableArray *sunmClients;
@property (readonly) NSArray *allClients;
@property (readonly) NSArray *notificationManagerClients;

- (id)init;
- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)activeNotificationManagerClient;

@end
