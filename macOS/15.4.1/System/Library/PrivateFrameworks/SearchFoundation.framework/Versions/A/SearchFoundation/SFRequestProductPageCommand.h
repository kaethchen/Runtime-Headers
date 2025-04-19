@class NSString, NSDictionary, NSData, SFTopic, SFCommandReference;

@interface SFRequestProductPageCommand : SFCommand <SFRequestProductPageCommand, NSSecureCoding, NSCopying> {
    struct { unsigned char itemIdentifier : 1; unsigned char versionIdentifier : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *distributorBundleIdentifier;
@property (nonatomic) unsigned long long itemIdentifier;
@property (nonatomic) unsigned long long versionIdentifier;
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
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasItemIdentifier;
- (BOOL)hasVersionIdentifier;

@end
