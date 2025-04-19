@class NSDictionary, NSString;

@interface WFUnsupportedContentLocation : WFContentLocation <NSSecureCoding, NSCopying, WFSerializableContent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *backingSerializedRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)locationWithIdentifier:(id)a0 serializedRepresentation:(id)a1;
+ (id)objectWithWFSerializedRepresentation:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedTitle;
- (id)initWithIdentifier:(id)a0 serializedRepresentation:(id)a1;
- (id)wfSerializedRepresentation;

@end
