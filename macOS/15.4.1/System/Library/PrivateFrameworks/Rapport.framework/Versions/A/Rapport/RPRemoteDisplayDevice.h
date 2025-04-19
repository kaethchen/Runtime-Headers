@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_source;

@interface RPRemoteDisplayDevice : RPEndpoint <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *persistentIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *cameraCapabilitiesRefetchTimer;
@property (copy) NSDictionary *cameraCapabilities;
@property (readonly, nonatomic) unsigned int flags;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (BOOL)isEqualToDevice:(id)a0;
- (void)clearCameraCapabilitiesRefetchTimer;
- (id)initWithIdentifier:(id)a0 name:(id)a1 model:(id)a2 accountID:(id)a3;
- (id)initWithKeychainDictionaryRepresentation:(id)a0;
- (id)keychainDictionaryRepresentation;
- (unsigned int)updateWithEndpoint:(id)a0;

@end
