@class NSArray;

@interface IMKeyTransparencyStatusChangedChatItem : IMTranscriptChatItem

@property (readonly, copy, nonatomic) NSArray *affectedHandles;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, getter=isGroupChat) BOOL groupChat;

- (void).cxx_destruct;
- (id)_initWithHandles:(id)a0 status:(unsigned long long)a1 isGroupChat:(BOOL)a2;

@end
