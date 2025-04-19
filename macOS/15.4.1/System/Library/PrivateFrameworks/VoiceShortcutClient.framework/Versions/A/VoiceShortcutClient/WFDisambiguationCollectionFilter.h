@class NSString, LNAppShortcutDynamicOptionsProviderReference;

@interface WFDisambiguationCollectionFilter : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *systemEntityCollectionIdentifier;
@property (retain, nonatomic) LNAppShortcutDynamicOptionsProviderReference *namedQueryReference;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)serializableRepresentation;
- (id)initWithNamedQueryReference:(id)a0;
- (id)initWithSystemEntityCollectionIdentifier:(id)a0;
- (id)initWithSystemEntityCollectionIdentifier:(id)a0 namedQueryReference:(id)a1;

@end
