@class NSString;

@interface IMStickerTapback : IMTapback {
    void /* unknown type, empty encoding */ _transferGuid;
}

@property (nonatomic, readonly) NSString *transferGUID;
@property (nonatomic, readonly) IMStickerTapback *counterpart;
@property (nonatomic, readonly) IMStickerTapback *removedTapbackCounterpart;
@property (nonatomic, readonly) IMStickerTapback *visibleTapbackCounterpart;

+ (BOOL)isValidAssociatedMessageType:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)a0;
- (id)initWithTransferGUID:(id)a0 isRemoved:(BOOL)a1;
- (id)actionStringFormatWithAdaptiveImageGlyphAvailable:(BOOL)a0;
- (id)adaptiveImageGlyphForPreviewStringWithAdaptiveImageGlyphProvider:(id /* block */)a0;
- (id)initWithAssociatedMessageType:(long long)a0;
- (id)reactionStringWithAdaptiveImageGlyph:(id)a0 isCommSafetySensitiveProvider:(id /* block */)a1;

@end
