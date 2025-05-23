@class BlastDoorBasicMessage, NSString, BlastDoorUnsupportedMessage, BlastDoorBasicEmojiTapback, BlastDoorBasicTapBack, BlastDoorBasicTypingIndicator, BlastDoorBasicAudioMessage;

@interface BlastDoorBasicTextMessageMessageTypeWrapper : NSObject {
    void /* unknown type, empty encoding */ basicTextMessage_MessageType;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) BlastDoorBasicTypingIndicator *typingIndicator;
@property (nonatomic, readonly) BlastDoorBasicMessage *textMessage;
@property (nonatomic, readonly) BlastDoorBasicTapBack *tapback;
@property (nonatomic, readonly) BlastDoorBasicAudioMessage *audioMessage;
@property (nonatomic, readonly) BlastDoorUnsupportedMessage *unsupported;
@property (nonatomic, readonly) BlastDoorBasicEmojiTapback *emojiTapback;

- (id)init;
- (void).cxx_destruct;

@end
