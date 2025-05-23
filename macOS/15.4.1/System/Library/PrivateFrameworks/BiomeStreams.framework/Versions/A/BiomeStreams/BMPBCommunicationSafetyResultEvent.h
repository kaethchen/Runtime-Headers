@class NSString, NSMutableArray, NSData;

@interface BMPBCommunicationSafetyResultEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char communicationSafetyResultContentType : 1; unsigned char communicationSafetyResultEventDirection : 1; unsigned char communicationSafetyResultEventType : 1; } _has;
    BOOL _skipImage;
}

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) BOOL hasChildId;
@property (retain, nonatomic) NSString *childId;
@property (readonly, nonatomic) BOOL hasDeviceId;
@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) BOOL hasCommunicationSafetyResultEventDirection;
@property (nonatomic) int communicationSafetyResultEventDirection;
@property (nonatomic) BOOL hasCommunicationSafetyResultEventType;
@property (nonatomic) int communicationSafetyResultEventType;
@property (nonatomic) BOOL hasCommunicationSafetyResultContentType;
@property (nonatomic) int communicationSafetyResultContentType;
@property (retain, nonatomic) NSMutableArray *contactHandles;
@property (readonly, nonatomic) BOOL hasContentId;
@property (retain, nonatomic) NSString *contentId;
@property (readonly, nonatomic) BOOL hasConversationId;
@property (retain, nonatomic) NSString *conversationId;
@property (readonly, nonatomic) BOOL hasImageData;
@property (retain, nonatomic) NSData *imageData;
@property (readonly, nonatomic) BOOL hasSourceBundleId;
@property (retain, nonatomic) NSString *sourceBundleId;
@property (readonly, nonatomic) BOOL hasSenderHandle;
@property (retain, nonatomic) NSString *senderHandle;
@property (readonly, nonatomic) BOOL hasContentURL;
@property (retain, nonatomic) NSString *contentURL;
@property (readonly, nonatomic) BOOL hasConversationURL;
@property (retain, nonatomic) NSString *conversationURL;

+ (Class)contactHandlesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsCommunicationSafetyResultContentType:(id)a0;
- (int)StringAsCommunicationSafetyResultEventType:(id)a0;
- (int)StringAsCommunicationSafetyResultEventDirection:(id)a0;
- (void)addContactHandles:(id)a0;
- (void)clearContactHandles;
- (id)communicationSafetyResultContentTypeAsString:(int)a0;
- (id)communicationSafetyResultEventDirectionAsString:(int)a0;
- (id)communicationSafetyResultEventTypeAsString:(int)a0;
- (id)contactHandlesAtIndex:(unsigned long long)a0;
- (unsigned long long)contactHandlesCount;
- (id)initWithData:(id)a0 skipImage:(BOOL)a1;

@end
