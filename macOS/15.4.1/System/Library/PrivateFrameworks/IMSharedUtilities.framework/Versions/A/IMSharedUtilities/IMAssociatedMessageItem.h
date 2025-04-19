@class NSString, NSArray, IMEmojiSticker, IMTapback, NSAttributedString;

@interface IMAssociatedMessageItem : IMMessageItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL isAvailabilityReplySupported;
@property (nonatomic) long long fileTransferReloadStatus;
@property (retain, nonatomic) NSString *associatedMessageGUID;
@property (nonatomic) long long associatedMessageType;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } associatedMessageRange;
@property (retain, nonatomic) NSString *associatedMessageEmoji;
@property (retain, nonatomic) IMTapback *tapback;
@property (retain, nonatomic) IMEmojiSticker *emojiSticker;
@property (retain, nonatomic) NSAttributedString *associatedMessagePartText;
@property (retain, nonatomic) NSString *associatedMessageEffect;
@property (retain, nonatomic) NSArray *consumedSessionPayloads;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)updateTemporaryFileTransferGUIDsWithPermanentFileTransferGUIDs:(id)a0;
- (BOOL)_updateAssociatedMessagePartTextReplacingTemporaryFileTransferGUIDsWithPermanentFileTransferGUIDs:(id)a0;
- (id)copyDictionaryRepresentation;
- (id)copyForBackwardsCompatibility;
- (id)emojiString;
- (id)initWithDictionary:(id)a0 hint:(id)a1;
- (id)initWithMessageItem:(id)a0;
- (id)initWithSender:(id)a0 time:(id)a1 body:(id)a2 attributes:(id)a3 fileTransferGUIDs:(id)a4 flags:(unsigned long long)a5 error:(id)a6 guid:(id)a7 associatedMessageGUID:(id)a8 associatedMessageType:(long long)a9 associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a10 associatedMessageEmoji:(id)a11 messageSummaryInfo:(id)a12 threadIdentifier:(id)a13;
- (id)initWithSender:(id)a0 time:(id)a1 body:(id)a2 attributes:(id)a3 fileTransferGUIDs:(id)a4 flags:(unsigned long long)a5 error:(id)a6 guid:(id)a7 associatedMessageGUID:(id)a8 associatedMessageType:(long long)a9 associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a10 messageSummaryInfo:(id)a11 threadIdentifier:(id)a12;
- (id)initWithSenderInfo:(id)a0 time:(id)a1 timeRead:(id)a2 timeDelivered:(id)a3 timePlayed:(id)a4 subject:(id)a5 body:(id)a6 bodyData:(id)a7 attributes:(id)a8 fileTransferGUIDs:(id)a9 flags:(unsigned long long)a10 guid:(id)a11 messageID:(long long)a12 account:(id)a13 accountID:(id)a14 service:(id)a15 handle:(id)a16 roomName:(id)a17 unformattedID:(id)a18 countryCode:(id)a19 expireState:(long long)a20 balloonBundleID:(id)a21 payloadData:(id)a22 expressiveSendStyleID:(id)a23 timeExpressiveSendPlayed:(id)a24 errorType:(unsigned int)a25 associatedMessageGUID:(id)a26 associatedMessageType:(long long)a27 associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a28 associatedMessageEmoji:(id)a29 bizIntent:(id)a30 locale:(id)a31 biaReferenceID:(id)a32 messageSummaryInfo:(id)a33 partCount:(unsigned long long)a34 threadIdentifier:(id)a35 dateRecovered:(id)a36 scheduleType:(unsigned long long)a37 scheduleState:(unsigned long long)a38;
- (id)initWithSenderInfo:(id)a0 time:(id)a1 timeRead:(id)a2 timeDelivered:(id)a3 timePlayed:(id)a4 subject:(id)a5 body:(id)a6 bodyData:(id)a7 attributes:(id)a8 fileTransferGUIDs:(id)a9 flags:(unsigned long long)a10 guid:(id)a11 messageID:(long long)a12 account:(id)a13 accountID:(id)a14 service:(id)a15 handle:(id)a16 roomName:(id)a17 unformattedID:(id)a18 countryCode:(id)a19 expireState:(long long)a20 balloonBundleID:(id)a21 payloadData:(id)a22 expressiveSendStyleID:(id)a23 timeExpressiveSendPlayed:(id)a24 errorType:(unsigned int)a25 associatedMessageGUID:(id)a26 associatedMessageType:(long long)a27 associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a28 bizIntent:(id)a29 locale:(id)a30 biaReferenceID:(id)a31 messageSummaryInfo:(id)a32 partCount:(unsigned long long)a33 threadIdentifier:(id)a34 dateRecovered:(id)a35;
- (id)initWithSenderInfo:(id)a0 time:(id)a1 timeRead:(id)a2 timeDelivered:(id)a3 timePlayed:(id)a4 subject:(id)a5 body:(id)a6 bodyData:(id)a7 attributes:(id)a8 fileTransferGUIDs:(id)a9 flags:(unsigned long long)a10 guid:(id)a11 messageID:(long long)a12 account:(id)a13 accountID:(id)a14 service:(id)a15 handle:(id)a16 roomName:(id)a17 unformattedID:(id)a18 countryCode:(id)a19 expireState:(long long)a20 balloonBundleID:(id)a21 payloadData:(id)a22 expressiveSendStyleID:(id)a23 timeExpressiveSendPlayed:(id)a24 errorType:(unsigned int)a25 associatedMessageGUID:(id)a26 associatedMessageType:(long long)a27 associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a28 bizIntent:(id)a29 locale:(id)a30 biaReferenceID:(id)a31 messageSummaryInfo:(id)a32 partCount:(unsigned long long)a33 threadIdentifier:(id)a34 dateRecovered:(id)a35 scheduleType:(unsigned long long)a36 scheduleState:(unsigned long long)a37;
- (BOOL)isAssociatedMessageItem;
- (BOOL)isBreadcrumb;
- (BOOL)isEmojiSticker;
- (BOOL)isFirstMessageCandidate;
- (BOOL)isLastMessageCandidate;
- (BOOL)isMessageAcknowledgment;
- (BOOL)isSticker;
- (void)setNeedsReloadForTransferStatusChangeWithType:(long long)a0;

@end
