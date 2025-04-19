@class NSString, NSDictionary, NSData, SFButtonItemAppearance;

@interface SFStoreButtonItem : SFButtonItem <SFStoreButtonItem, NSSecureCoding, NSCopying> {
    struct { unsigned char shouldOpenAppAfterInstallCompletes : 1; unsigned char identifierType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL shouldOpenAppAfterInstallCompletes;
@property (nonatomic) int identifierType;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFButtonItemAppearance *buttonAppearance;
@property (nonatomic) unsigned long long uniqueId;
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
- (BOOL)hasIdentifierType;
- (BOOL)hasShouldOpenAppAfterInstallCompletes;

@end
