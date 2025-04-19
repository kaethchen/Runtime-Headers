@class NSString, APSConnection, NSArray;
@protocol AOSPushDelegate;

@interface AOSPushManager : NSObject <APSConnectionDelegate> {
    NSString *_apsEnvironment;
    APSConnection *_apsConnection;
    NSString *_tokenString;
    NSArray *_topics;
    BOOL _enableLaunching;
    id<AOSPushDelegate> _msgDelegate;
    BOOL _tokenFetchAttempted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)clearCaches;
- (id)tokenString;
- (void)connection:(id)a0 didReceiveMessageForTopic:(id)a1 userInfo:(id)a2;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)_cleanUpConnection;
- (void)clearConnection;
- (void)_createConnectionReplacingExisting:(BOOL)a0;
- (void)_setTokenString:(id)a0;
- (id)_tokenStringFromData:(id)a0;
- (void)listenOnTopics:(id)a0 withDelegate:(id)a1 andLaunching:(BOOL)a2;
- (void)setMessageDelegate:(id)a0;
- (id)tokenDataFromSystem;

@end
