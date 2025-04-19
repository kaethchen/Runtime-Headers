@class NSUUID, IMHandle, NSString;

@interface IMParticipantChangeChatItem : IMTranscriptChatItem <IMFallibleChatItem>

@property (readonly, nonatomic) long long changeType;
@property (readonly, nonatomic) IMHandle *sender;
@property (readonly, nonatomic) IMHandle *otherHandle;
@property (retain, nonatomic) NSUUID *activeTelephonyConversationUUID;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) BOOL unattributed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
