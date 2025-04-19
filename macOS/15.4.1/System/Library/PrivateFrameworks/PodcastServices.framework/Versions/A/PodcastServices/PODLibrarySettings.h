@class NSString;

@interface PODLibrarySettings : NSObject <PODSecureCoding, PODFeedHandlingSettingsProtocol, PODSyncSettingsProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long downloadAction;
@property (readonly, nonatomic) long long limitRule;
@property (readonly, nonatomic) long long removePlayedRule;
@property (readonly, nonatomic) BOOL syncSubscriptions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFeedHandlingSettings:(id)a0;

@end
