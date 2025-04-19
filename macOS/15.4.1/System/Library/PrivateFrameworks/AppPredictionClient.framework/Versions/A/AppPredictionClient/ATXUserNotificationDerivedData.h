@class NSArray, NSMutableArray;

@interface ATXUserNotificationDerivedData : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSCopying> {
    NSMutableArray *_internalScores;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=getPublicScores) NSArray *scores;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonRepresentation;
- (void)addScore:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (void)addScores:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initFromJSON:(id)a0;
- (id)initFromModelScores:(id)a0;
- (BOOL)isEqualToATXUserNotificationDerivedData:(id)a0;

@end
