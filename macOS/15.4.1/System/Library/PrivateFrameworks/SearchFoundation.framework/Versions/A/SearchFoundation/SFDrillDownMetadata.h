@class SFEntitySearchMetadata, NSString, NSArray, SFCardMetadata, NSDictionary, SFCardSearchMetadata, NSData;

@interface SFDrillDownMetadata : NSObject <SFDrillDownMetadata, NSSecureCoding, NSCopying> {
    struct { unsigned char cardOnlyMetadata : 1; unsigned char entitySearchOnlyMetadata : 1; unsigned char cardSearchMetadata : 1; unsigned char entitySearchMetadata : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *cardIdentifier;
@property (copy, nonatomic) NSArray *cardIdentifiers;
@property (copy, nonatomic) NSArray *cardDomains;
@property (copy, nonatomic) NSString *qtype;
@property (copy, nonatomic) NSString *viewConfigName;
@property (retain, nonatomic) SFCardMetadata *cardOnlyMetadata;
@property (retain, nonatomic) SFEntitySearchMetadata *entitySearchOnlyMetadata;
@property (retain, nonatomic) SFCardSearchMetadata *cardSearchMetadata;
@property (retain, nonatomic) SFEntitySearchMetadata *entitySearchMetadata;
@property (copy, nonatomic) NSString *debugParams;
@property (copy, nonatomic) NSString *params;
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
- (BOOL)hasCardOnlyMetadata;
- (BOOL)hasCardSearchMetadata;
- (BOOL)hasEntitySearchMetadata;
- (BOOL)hasEntitySearchOnlyMetadata;

@end
