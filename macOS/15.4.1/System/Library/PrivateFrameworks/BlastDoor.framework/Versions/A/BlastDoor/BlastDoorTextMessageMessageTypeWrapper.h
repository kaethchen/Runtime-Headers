@class BlastDoorAudioMessage, NSString, BlastDoorTypingIndicator, BlastDoorTapBack, BlastDoorEmojiTapBack, BlastDoorMessage, BlastDoorStickerTapBack, BlastDoorSticker, BlastDoorBalloonPlugin;

@interface BlastDoorTextMessageMessageTypeWrapper : NSObject {
    void /* unknown type, empty encoding */ textMessage_MessageType;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) BlastDoorTypingIndicator *typingIndicator;
@property (nonatomic, readonly) BlastDoorMessage *textMessage;
@property (nonatomic, readonly) BlastDoorTapBack *tapback;
@property (nonatomic, readonly) BlastDoorBalloonPlugin *balloonPlugin;
@property (nonatomic, readonly) BlastDoorSticker *sticker;
@property (nonatomic, readonly) BlastDoorAudioMessage *audioMessage;
@property (nonatomic, readonly) BlastDoorEmojiTapBack *emojiTapback;
@property (nonatomic, readonly) BlastDoorStickerTapBack *stickerTapback;

- (id)init;
- (void).cxx_destruct;

@end
