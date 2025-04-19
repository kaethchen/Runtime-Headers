@interface APSOutgoingMessage : APSMessage

@property (nonatomic) unsigned long long timeout;
@property (nonatomic, getter=isCritical) BOOL critical;
@property (nonatomic) unsigned long long payloadFormat;
@property (nonatomic) unsigned long long payloadLength;
@property (nonatomic) BOOL sendRetried;
@property (nonatomic) BOOL ackReceived;
@property (nonatomic) unsigned long long ackTimestamp;

- (id)timestamp;
- (long long)priority;
- (void)setTimestamp:(id)a0;
- (void)setCancelled:(BOOL)a0;
- (void)setPriority:(long long)a0;
- (BOOL)wasCancelled;
- (BOOL)isEager;
- (id)sendTimeoutTime;
- (BOOL)wasSent;
- (unsigned long long)_effectiveSendTimeout;
- (id)channelID;
- (id)eagernessTimeoutTime;
- (BOOL)hasTimedOut;
- (unsigned long long)messageID;
- (id)originator;
- (unsigned int)pushFlags;
- (unsigned long long)pushType;
- (id)rawTimeoutTime;
- (id)sendInterfaceIdentifier;
- (id)sentTimestamp;
- (void)setChannelID:(id)a0;
- (void)setMessageID:(unsigned long long)a0;
- (void)setOriginator:(id)a0;
- (void)setPushFlags:(unsigned int)a0;
- (void)setPushType:(unsigned long long)a0;
- (void)setSendInterfaceIdentifier:(id)a0;
- (void)setSent:(BOOL)a0;
- (void)setSentTimestamp:(id)a0;
- (void)setTimedOut:(BOOL)a0;

@end
