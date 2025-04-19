@class SFColor, NSString, NSArray, SFSymbolImage, SFImage, NSData, NSDictionary, SFTopic, SFCommandReference, SFDrillDownMetadata;

@interface SFPerformEntityQueryCommand : SFCommand <SFPerformEntityQueryCommand, NSSecureCoding, NSCopying> {
    struct { unsigned char entityType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *searchString;
@property (copy, nonatomic) NSString *tokenString;
@property (retain, nonatomic) SFSymbolImage *symbolImage;
@property (nonatomic) int entityType;
@property (copy, nonatomic) NSString *entityIdentifier;
@property (retain, nonatomic) SFColor *entityBackgroundColor;
@property (retain, nonatomic) SFDrillDownMetadata *metadata;
@property (retain, nonatomic) SFDrillDownMetadata *drilldownMetadata;
@property (retain, nonatomic) SFImage *tokenImage;
@property (copy, nonatomic) NSArray *filterQueries;
@property (copy, nonatomic) NSArray *enabledDomains;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *commandDetail;
@property (retain, nonatomic) SFTopic *normalizedTopic;
@property (copy, nonatomic) NSData *backendData;
@property (retain, nonatomic) SFCommandReference *commandReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasEntityType;
- (id)initWithProtobuf:(id)a0;

@end
