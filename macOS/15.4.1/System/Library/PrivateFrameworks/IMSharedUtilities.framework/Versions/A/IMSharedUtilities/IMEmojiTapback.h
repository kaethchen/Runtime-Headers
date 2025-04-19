@class NSString;

@interface IMEmojiTapback : IMTapback {
    void /* unknown type, empty encoding */ emoji;
}

@property (nonatomic, readonly) NSString *associatedMessageEmoji;
@property (nonatomic, readonly) IMEmojiTapback *counterpart;
@property (nonatomic, readonly) IMEmojiTapback *removedTapbackCounterpart;
@property (nonatomic, readonly) IMEmojiTapback *visibleTapbackCounterpart;
@property (nonatomic, readonly) NSString *description;

+ (BOOL)isValidAssociatedMessageType:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)a0;
- (id)actionStringFormatWithAdaptiveImageGlyphAvailable:(BOOL)a0;
- (id)initWithAssociatedMessageType:(long long)a0;
- (id)initWithEmoji:(id)a0 isRemoved:(BOOL)a1;
- (id)reactionStringWithAdaptiveImageGlyph:(id)a0 isCommSafetySensitiveProvider:(id /* block */)a1;

@end
