@class CCItemMessage, NSArray, NSString;
@protocol CCItemContent;

@interface SEMCascadeEntityInfo : NSObject <SEMEntityInfo> {
    CCItemMessage<CCItemContent> *_content;
    NSArray *_allMetaContent;
    NSString *_sourceIdentifier;
    NSString *_personaIdentifier;
    NSArray *_convertedInstances;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)content;
- (id)personaIdentifier;
- (id)sourceIdentifier;
- (unsigned short)itemType;
- (unsigned char)entityType;
- (id)sourceIdentifierOrConstant;
- (id)toKVItem:(id *)a0;
- (id)allMetaContent;
- (id)initWithContent:(id)a0 allMetaContent:(id)a1 sourceIdentifier:(id)a2 personaIdentifier:(id)a3;
- (BOOL)isEqualToCascadeEntityInfo:(id)a0;
- (id)toINPersons:(id *)a0;
- (id)toKVItems:(id *)a0;

@end
