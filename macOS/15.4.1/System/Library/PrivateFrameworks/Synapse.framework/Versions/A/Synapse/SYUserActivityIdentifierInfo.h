@class NSString, NSURL;

@interface SYUserActivityIdentifierInfo : NSObject <NSSecureCoding, SYUserActivityInfo>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *activityType;
@property (copy) NSURL *webpageURL;
@property (copy) NSURL *canonicalURL;
@property (copy) NSString *targetContentIdentifier;
@property (copy) NSString *persistentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActivityType:(id)a0;
- (id)initWithUserActivity:(id)a0;
- (BOOL)isEqualToActivityIdentifierInfo:(id)a0;

@end
