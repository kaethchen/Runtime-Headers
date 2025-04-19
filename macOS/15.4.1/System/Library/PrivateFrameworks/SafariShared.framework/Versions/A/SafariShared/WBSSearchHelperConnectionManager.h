@class NSMutableSet, NSXPCConnection;

@interface WBSSearchHelperConnectionManager : NSObject {
    NSMutableSet *_clients;
}

@property (retain, nonatomic) NSXPCConnection *searchHelperConnection;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)removeClient:(id)a0;
- (id)searchHelperConnectionRequestedByClient:(id)a0;

@end
