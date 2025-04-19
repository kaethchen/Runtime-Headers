@class NSString, NSData;

@interface FCUserEventsManager : NSObject {
    NSString *_userName;
    NSData *_authData;
    BOOL _registeredWithServer;
}

- (void)dealloc;
- (void)close;
- (id)initWithUserName:(id)a0 authorization:(id)a1;
- (id)executeFetchRequest:(id)a0 entityName:(id)a1;
- (void)clearLogHistoryForEntityName:(id)a0;

@end
