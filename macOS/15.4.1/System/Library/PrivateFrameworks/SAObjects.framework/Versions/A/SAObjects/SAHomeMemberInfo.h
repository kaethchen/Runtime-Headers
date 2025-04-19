@class NSArray, NSString, SAHomeMemberSettings;

@interface SAHomeMemberInfo : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *attributes;
@property (copy, nonatomic) NSString *companionAssistantId;
@property (copy, nonatomic) NSString *companionSpeechId;
@property (copy, nonatomic) NSString *enrollmentName;
@property (retain, nonatomic) SAHomeMemberSettings *homeMemberSettings;
@property (copy, nonatomic) NSString *lastVisitedAceHost;
@property (copy, nonatomic) NSString *loggableCompanionAssistantId;
@property (copy, nonatomic) NSString *loggableMultiUserSharedUserId;
@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (copy, nonatomic) NSString *personaIdentifier;
@property (copy, nonatomic) NSString *sharedUserId;
@property (copy, nonatomic) NSString *speechId;
@property (nonatomic) BOOL userAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)groupIdentifier;
- (id)encodedClassName;

@end
