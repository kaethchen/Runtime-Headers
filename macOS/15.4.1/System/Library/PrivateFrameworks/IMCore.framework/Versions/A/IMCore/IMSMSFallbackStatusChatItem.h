@class NSString, IMHandle;

@interface IMSMSFallbackStatusChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) IMHandle *handle;
@property (readonly, nonatomic) NSString *previousServiceName;
@property (readonly, nonatomic) BOOL canSMSReply;

- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 handle:(id)a1 previousServiceName:(id)a2 canSMSReply:(BOOL)a3;

@end
