@interface EKPersistentParticipant : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (id)propertyKeyForUniqueIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOwner:(id)a0;
- (id)url;
- (id)UUID;
- (id)displayName;
- (id)phoneNumber;
- (id)owner;
- (void)setUUID:(id)a0;
- (id)firstName;
- (id)comment;
- (void)setComment:(id)a0;
- (void)setPhoneNumber:(id)a0;
- (id)emailAddress;
- (id)lastName;
- (void)setEmailAddress:(id)a0;
- (void)setFirstName:(id)a0;
- (void)setLastName:(id)a0;
- (id)URLString;
- (id)commentLastModifiedDate;
- (id)displayNameRaw;
- (id)inviterNameString;
- (id)proposedStartDate;
- (int)proposedStartDateStatus;
- (BOOL)scheduleForceSend;
- (int)scheduleStatus;
- (id)semanticIdentifier;
- (void)setCommentLastModifiedDate:(id)a0;
- (void)setDisplayNameRaw:(id)a0;
- (void)setInviterNameString:(id)a0;
- (void)setProposedStartDate:(id)a0;
- (void)setProposedStartDateStatus:(int)a0;
- (void)setScheduleForceSend:(BOOL)a0;
- (void)setScheduleStatus:(int)a0;
- (void)setURLString:(id)a0;

@end
