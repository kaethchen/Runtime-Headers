@class NSString, NSNumber;

@interface ATXAppDirectorySessionMetadata : NSObject <ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *engagedBundleId;
@property (retain, nonatomic) NSNumber *engagedBundleIdInTopAppsVisible;
@property (nonatomic) BOOL didSearchDuringSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEngagedBundleId:(id)a0 engagedBundleIdInTopAppsVisible:(id)a1 didSearchDuringSession:(BOOL)a2;
- (BOOL)isEqualToATXAppDirectorySessionMetadata:(id)a0;

@end
