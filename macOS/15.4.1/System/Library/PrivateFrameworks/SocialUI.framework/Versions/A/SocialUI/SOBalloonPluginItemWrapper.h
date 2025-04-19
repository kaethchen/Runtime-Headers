@class NSString;

@interface SOBalloonPluginItemWrapper : NSObject <NSPasteboardWriting> {
    NSString *_chatItemGuid;
    NSString *_chatGuid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;
- (id)initWithChatItemGUID:(id)a0 forChatGUID:(id)a1;

@end
