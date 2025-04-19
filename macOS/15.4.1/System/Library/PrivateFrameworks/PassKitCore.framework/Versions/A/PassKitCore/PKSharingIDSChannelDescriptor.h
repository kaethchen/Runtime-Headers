@class NSString;

@interface PKSharingIDSChannelDescriptor : PKSharingChannelDescriptor

@property (readonly, nonatomic) unsigned long long subtype;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSString *sessionIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)createWithDeviceIdentifier:(id)a0;
+ (id)createWithRemoteAddress:(id)a0;
+ (id)existingForSessionIdentifier:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithSessionIdentifier:(id)a0 deviceIdentifier:(id)a1 subtype:(unsigned long long)a2;
- (id)initWithSessionIdentifier:(id)a0 deviceIdentifier:(id)a1;

@end
