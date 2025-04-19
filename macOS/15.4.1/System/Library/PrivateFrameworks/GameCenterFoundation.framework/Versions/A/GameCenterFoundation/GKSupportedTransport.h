@class NSString;

@interface GKSupportedTransport : GKInternalRepresentation

@property (readonly, retain, nonatomic) NSString *name;
@property (nonatomic) long long version;

+ (id)secureCodedPropertyKeys;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithVersionNumber:(id)a0;

@end
