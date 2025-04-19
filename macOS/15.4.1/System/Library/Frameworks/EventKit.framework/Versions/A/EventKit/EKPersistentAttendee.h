@class NSDate;

@interface EKPersistentAttendee : EKPersistentParticipant

@property (nonatomic) int statusRaw;
@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantType;
@property (nonatomic) int pendingStatus;
@property (copy, nonatomic) NSDate *lastModified;
@property (nonatomic) BOOL commentChanged;
@property (nonatomic) BOOL statusChanged;
@property (nonatomic) BOOL proposedStartDateChanged;

+ (id)relations;
+ (id)attendeeWithEmailAddress:(id)a0 name:(id)a1;
+ (id)attendeeWithName:(id)a0 emailAddress:(id)a1 address:(id)a2;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)propertiesToUnloadOnCommit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned int)flags;
- (void)setFlags:(unsigned int)a0;
- (BOOL)isCurrentUser;
- (long long)participantRole;
- (long long)participantType;
- (void)setParticipantRole:(long long)a0;
- (void)setParticipantType:(long long)a0;
- (int)entityType;
- (id)lastModifiedParticipationStatus;
- (id)initWithAddress:(id)a0 name:(id)a1;
- (id)initWithEmailAddress:(id)a0 name:(id)a1;
- (id)initWithName:(id)a0 emailAddress:(id)a1 address:(id)a2;
- (int)pendingStatusRaw;
- (void)setLastModifiedParticipationStatus:(id)a0;
- (void)setPendingStatusRaw:(int)a0;
- (void)setStatusRaw:(int)a0;
- (int)statusRaw;

@end
