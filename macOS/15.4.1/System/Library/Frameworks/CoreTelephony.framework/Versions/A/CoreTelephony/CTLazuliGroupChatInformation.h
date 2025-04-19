@class CTLazuliGroupChatParticipant, CTLazuliGroupChatConversationID, CTLazuliGroupChatContributionID, CTLazuliGroupChatUri, CTLazuliGroupChatSubject, CTLazuliGroupChatParticipantList, CTLazuliGroupChatIcon;

@interface CTLazuliGroupChatInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTLazuliGroupChatParticipantList *participants;
@property (retain, nonatomic) CTLazuliGroupChatConversationID *conversationID;
@property (retain, nonatomic) CTLazuliGroupChatContributionID *contributionID;
@property (retain, nonatomic) CTLazuliGroupChatUri *remoteUri;
@property (retain, nonatomic) CTLazuliGroupChatSubject *subject;
@property (retain, nonatomic) CTLazuliGroupChatIcon *icon;
@property (retain, nonatomic) CTLazuliGroupChatParticipant *mastermind;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliGroupChatInformation:(id)a0;

@end
