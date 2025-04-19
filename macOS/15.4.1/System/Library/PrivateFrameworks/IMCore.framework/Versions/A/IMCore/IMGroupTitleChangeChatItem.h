@class NSString, IMHandle;

@interface IMGroupTitleChangeChatItem : IMTranscriptChatItem <IMFallibleChatItem>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) IMHandle *sender;
@property (readonly, nonatomic) BOOL failed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 sender:(id)a1;

@end
