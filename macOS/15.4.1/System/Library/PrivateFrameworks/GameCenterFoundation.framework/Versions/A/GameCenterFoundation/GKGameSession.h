@class NSString, NSArray, NSMutableDictionary, NSDate, GKCloudPlayer;

@interface GKGameSession : NSObject <NSSecureCoding> {
    int sendDataMetricsReported;
    int sendMessageMetricsReported;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) GKCloudPlayer *owner;
@property (retain, nonatomic) NSArray *players;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) GKCloudPlayer *lastModifiedPlayer;
@property (retain, nonatomic) NSString *serverChangeTag;
@property (nonatomic) long long maxNumberOfConnectedPlayers;
@property (retain, nonatomic) NSMutableDictionary *playerStates;
@property (readonly, nonatomic) NSArray *badgedPlayers;

+ (void)createSessionInContainer:(id)a0 withTitle:(id)a1 maxConnectedPlayers:(long long)a2 completionHandler:(id /* block */)a3;
+ (void)loadSessionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadSessionsInContainer:(id)a0 completionHandler:(id /* block */)a1;
+ (void)removeSessionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (void)clearBadgeForPlayers:(id)a0 completionHandler:(id /* block */)a1;
- (void)getShareURLWithCompletionHandler:(id /* block */)a0;
- (id)playersWithConnectionState:(long long)a0;
- (void)saveData:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendData:(id)a0 withTransportType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)sendMessageWithLocalizedFormatKey:(id)a0 arguments:(id)a1 data:(id)a2 toPlayers:(id)a3 badgePlayers:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)setConnectionState:(long long)a0 completionHandler:(id /* block */)a1;

@end
