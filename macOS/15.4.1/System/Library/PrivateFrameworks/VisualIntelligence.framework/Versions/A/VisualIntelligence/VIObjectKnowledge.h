@class NSString, NSArray, NSURL, NSDictionary, NSData;

@interface VIObjectKnowledge : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *knowledgeGraphID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSURL *thumbnailURL;
@property (readonly, nonatomic) float thumbnailAspectRatio;
@property (readonly, copy, nonatomic) NSString *shortDescription;
@property (readonly, copy, nonatomic) NSString *detailedDescription;
@property (readonly, copy, nonatomic) NSURL *webURL;
@property (readonly, copy, nonatomic) NSArray *knowledgeProperties;
@property (readonly, nonatomic) unsigned long long csuQid;
@property (readonly, nonatomic) short csuIdType;
@property (readonly, copy, nonatomic) NSString *csuLocalizedLabel;
@property (readonly, copy, nonatomic) NSDictionary *csuLocalizedLabelDictionary;
@property (readonly, nonatomic) double csuConfidence;
@property (readonly, nonatomic) BOOL csuSensitiveLocation;
@property (readonly, copy, nonatomic) NSString *csuCategory;
@property (readonly, copy, nonatomic) NSString *csuVertical;
@property (readonly, copy, nonatomic) NSDictionary *csuLocalizedSynonymsDictionary;
@property (readonly, nonatomic) double csuLongitute;
@property (readonly, nonatomic) double csuLatitute;
@property (readonly, nonatomic) int csuVersion;
@property (readonly, nonatomic) long long serializedDomainType;
@property (readonly, copy, nonatomic) NSData *serializedDomainResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKnowledgeGraphID:(id)a0 title:(id)a1 thumbnailURL:(id)a2 thumbnailAspectRatio:(float)a3 shortDescription:(id)a4 detailedDescription:(id)a5 webURL:(id)a6 knowledgeProperties:(id)a7 serializedDomainType:(long long)a8 serializedDomainResponse:(id)a9;
- (id)initWithKnowledgeGraphID:(id)a0 title:(id)a1 thumbnailURL:(id)a2 thumbnailAspectRatio:(float)a3 shortDescription:(id)a4 detailedDescription:(id)a5 webURL:(id)a6 knowledgeProperties:(id)a7 serializedDomainType:(long long)a8 serializedDomainResponse:(id)a9 csuQid:(unsigned long long)a10 csuIdType:(short)a11 csuLocalizedLabel:(id)a12 csuLocalizedLabelDictionary:(id)a13 csuConfidence:(double)a14 csuSensitiveLocation:(BOOL)a15 csuCategory:(id)a16 csuVertical:(id)a17 csuLocalizedSynonyms:(id)a18 csuLongitute:(double)a19 csuLatitute:(double)a20 csuVersion:(int)a21;

@end
