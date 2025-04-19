@class NSString;

@interface PKSharingExistingChannelDescriptor : PKSharingChannelDescriptor

@property (readonly, nonatomic) NSString *transportIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)existingForTransportIdentifier:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithTransportIdentifier:(id)a0;

@end
