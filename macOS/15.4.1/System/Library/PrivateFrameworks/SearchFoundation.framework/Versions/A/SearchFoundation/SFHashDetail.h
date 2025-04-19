@class NSString, NSArray, NSDictionary, NSData;

@interface SFHashDetail : NSObject <SFHashDetail, NSSecureCoding, NSCopying> {
    struct { unsigned char has_summary : 1; unsigned char has_table_of_contents : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL has_ee;
@property (copy, nonatomic) NSString *full_hash;
@property (nonatomic) BOOL has_summary;
@property (copy, nonatomic) NSArray *sba_entity_types;
@property (nonatomic) BOOL has_table_of_contents;
@property (copy, nonatomic) NSString *matched_url_variant;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasHas_summary;
- (BOOL)hasHas_table_of_contents;

@end
