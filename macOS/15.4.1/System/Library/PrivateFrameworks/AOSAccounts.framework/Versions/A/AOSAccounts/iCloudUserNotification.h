@class NSString, NSDictionary, NSData;

@interface iCloudUserNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *uuid;
@property (copy) NSString *clientIdentifier;
@property (copy) NSString *delegateMachServiceName;
@property (copy) NSString *identifier;
@property (copy) NSString *title;
@property (copy) NSString *informativeText;
@property (copy) NSString *accountDSID;
@property unsigned long long displayStyle;
@property (copy) NSString *actionButtonLabel;
@property (copy) NSString *otherButtonLabel;
@property (copy) NSDictionary *activateActionDict;
@property (copy) NSDictionary *dismissActionDict;
@property (copy) NSDictionary *clearActionDict;
@property (copy) NSDictionary *launchActionDict;
@property (copy) NSData *launchActionArguments;
@property (copy) NSDictionary *userInfo;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cacheDictionaryRepresentation;
- (id)initWithCacheDictionaryRepresentation:(id)a0;

@end
