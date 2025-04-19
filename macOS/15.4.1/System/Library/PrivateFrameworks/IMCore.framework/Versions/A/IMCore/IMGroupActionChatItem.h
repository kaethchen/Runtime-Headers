@class NSArray, IMHandle;

@interface IMGroupActionChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) IMHandle *sender;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) NSArray *fileTransferGUIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 sender:(id)a1;

@end
