@class NSString, NSDictionary, NSData, SFTopic, SFCommandReference;

@interface SFPerformContactActionCommand : SFCommand <SFPerformContactActionCommand, NSSecureCoding, NSCopying> {
    struct { unsigned char contactActionType : 1; unsigned char didDisplayHandleOptions : 1; unsigned char didSelectFromOptionsMenu : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int contactActionType;
@property (nonatomic) BOOL didDisplayHandleOptions;
@property (nonatomic) BOOL didSelectFromOptionsMenu;
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
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasContactActionType;
- (BOOL)hasDidDisplayHandleOptions;
- (BOOL)hasDidSelectFromOptionsMenu;

@end
