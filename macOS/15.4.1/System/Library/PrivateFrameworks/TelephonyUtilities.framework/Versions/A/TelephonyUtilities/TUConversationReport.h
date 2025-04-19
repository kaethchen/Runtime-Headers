@class NSUUID, NSDate;

@interface TUConversationReport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *timebase;
@property (readonly, nonatomic) NSUUID *conversationID;
@property (readonly, nonatomic) NSUUID *paddingForHashedValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hashForParticipantIdentifier:(unsigned long long)a0;
- (id)initWithConversationID:(id)a0 padding:(id)a1 timebase:(id)a2;
- (BOOL)isEqualToConversationReport:(id)a0;

@end
