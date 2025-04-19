@class NSString, IMHandle;

@interface IMRichActionFooterChatItem : IMTranscriptChatItem {
    IMHandle *_handle;
}

@property (readonly, nonatomic) NSString *extensionName;

- (void).cxx_destruct;
- (id)handle;
- (id)_initWithItem:(id)a0;
- (BOOL)isFromMe;

@end
