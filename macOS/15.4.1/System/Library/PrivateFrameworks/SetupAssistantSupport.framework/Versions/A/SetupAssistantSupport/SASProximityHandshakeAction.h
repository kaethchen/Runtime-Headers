@class SASProximityHandshake;

@interface SASProximityHandshakeAction : SASProximityAction

@property (retain) SASProximityHandshake *handshake;

+ (unsigned long long)actionID;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasResponse;
- (id)responsePayload;
- (void)setResponseFromData:(id)a0;

@end
