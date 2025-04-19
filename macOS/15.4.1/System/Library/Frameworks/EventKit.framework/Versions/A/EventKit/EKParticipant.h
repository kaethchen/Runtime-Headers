@class NSString, NSURL, NSDate, NSPredicate, EKCalendarItem;

@interface EKParticipant : EKObject <EKIdentityProtocol, NSCopying>

@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *inviterNameString;
@property (readonly, nonatomic) BOOL needsResponse;
@property (readonly, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *comment;
@property (readonly, nonatomic) NSDate *commentLastModifiedDate;
@property (nonatomic) BOOL scheduleForceSend;
@property (readonly, nonatomic) EKCalendarItem *owner;
@property (readonly, nonatomic) int scheduleStatus;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long participantStatus;
@property (readonly, nonatomic) long long participantRole;
@property (readonly, nonatomic) long long participantType;
@property (readonly, nonatomic, getter=isCurrentUser) BOOL currentUser;
@property (readonly, nonatomic) NSPredicate *contactPredicate;
@property (readonly, nonatomic) BOOL isCurrentUserForSharing;
@property (readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canonicalizedEqualityTestValue1:(id)a0 value2:(id)a1 key:(id)a2 object1:(id)a3 object2:(id)a4;
+ (BOOL)doesParticipantURLString:(id)a0 email:(id)a1 andPhoneNumber:(id)a2 matchParticipantURLString:(id)a3 email:(id)a4 andPhoneNumber:(id)a5;
+ (id)knownIdentityKeysForComparison;
+ (id)knownRelationshipWeakKeys;
+ (id)knownSingleValueKeysForComparison;
+ (BOOL)needsResponseForParticipantStatus:(long long)a0;
+ (id)participantWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 url:(id)a3;
+ (id)participantWithName:(id)a0 url:(id)a1;
+ (id)specialComparisonBlocks;

- (void).cxx_destruct;
- (void)setDisplayName:(id)a0;
- (void)setURL:(id)a0;
- (id)url;
- (id)displayName;
- (void)setUUID:(id)a0;
- (id)displayString;
- (id)contactPredicate;
- (id)nameComponents;
- (id)URLString;
- (id)ABPersonInAddressBook:(id)a0;
- (id)existingContact;
- (id)displayNameRaw;
- (id)generateSemanticIdentifier;
- (id)initWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 url:(id)a3;
- (id)inviterNameString;
- (BOOL)isEqualToParticipant:(id)a0;
- (BOOL)isLocationRoom;
- (id)nameUsingAddressAsBackup;
- (id)newContact;
- (id)semanticIdentifier;
- (void)setDisplayNameRaw:(id)a0;
- (void)setInviterNameString:(id)a0;
- (void)setURLString:(id)a0;

@end
