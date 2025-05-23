@class NSDictionary;

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    NSDictionary *_kv;
    NSDictionary *_storeKVDict;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long length;

+ (id)createKnowledgeVectorDictionaryFromString:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateHash;
- (id)createSetOfAllPeerIDsWithOtherVector:(id)a0;
- (id)initWithKnowledgeVectorDictionary:(id)a0;
- (id)initWithKnowledgeVectorString:(id)a0;
- (id)initWithStoreKnowledgeVectorDictionary:(id)a0;

@end
