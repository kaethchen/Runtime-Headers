@class NSUUID, NSString, NSDate, NSObject;
@protocol OS_nw_activity, NSCopying;

@interface VCSessionConfiguration : NSObject

@property (nonatomic) long long sessionMode;
@property (retain, nonatomic) NSObject<NSCopying> *reportingHierarchyToken;
@property (nonatomic, getter=isOneToOneModeEnabled) BOOL oneToOneModeEnabled;
@property (nonatomic, getter=isOneToOneAuthenticationTagEnabled) BOOL oneToOneAuthenticationTagEnabled;
@property (nonatomic, getter=isGftTLEEnabled) BOOL gftTLEEnabled;
@property (nonatomic, getter=isRemoteScreenControlEnabled) BOOL remoteScreenControlEnabled;
@property (nonatomic) BOOL isGKVoiceChat;
@property (copy, nonatomic) NSUUID *conversationID;
@property (copy, nonatomic) NSDate *conversationTimeBase;
@property (copy, nonatomic) NSDate *conversationTimeBaseTruncated;
@property (nonatomic, setter=setParentNWActivity:) NSObject<OS_nw_activity> *parentNWActivity;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) BOOL outOfProcessCodecsEnabled;

- (void)dealloc;
- (id)init;
- (BOOL)applyConfigurationUsingClientDict:(id)a0;
- (void)applyDefaultsConfigurationOverrides;
- (void)cleanupNwActivity;
- (id)initWithClientDictionary:(id)a0;
- (BOOL)updateWithClientDictionary:(id)a0;

@end
