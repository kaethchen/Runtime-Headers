@class NSArray, NSURL, NSDate, CPLShareParticipant;

@interface CPLShare : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long publicPermission;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSArray *participants;
@property (copy, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) CPLShareParticipant *owner;
@property (readonly, nonatomic) CPLShareParticipant *currentUserParticipant;
@property (readonly, nonatomic) BOOL ownerIsCurrentUser;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;

@end
