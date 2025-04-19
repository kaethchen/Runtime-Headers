@class NSString;

@interface PKSharingLocalChannelDescriptor : PKSharingChannelDescriptor {
    NSString *_baseTransportIdentifier;
}

@property (readonly, nonatomic) unsigned long long subtype;
@property (readonly, nonatomic) NSString *transportIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)createDestinationWithIdentifier:(id)a0;
+ (id)createSourceWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithBaseTransportIdentifier:(id)a0 subtype:(unsigned long long)a1;
- (id)contraChannelTransportIdentifier;

@end
