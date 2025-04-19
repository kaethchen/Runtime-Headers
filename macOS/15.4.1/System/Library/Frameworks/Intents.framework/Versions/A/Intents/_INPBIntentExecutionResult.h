@class NSString;

@interface _INPBIntentExecutionResult : PBCodable <_INPBIntentExecutionResult, NSSecureCoding, NSCopying> {
    struct { unsigned char encodingFormat : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *encodedIntent;
@property (readonly, nonatomic) BOOL hasEncodedIntent;
@property (copy, nonatomic) NSString *encodedIntentResponse;
@property (readonly, nonatomic) BOOL hasEncodedIntentResponse;
@property (nonatomic) int encodingFormat;
@property (nonatomic) BOOL hasEncodingFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsEncodingFormat:(id)a0;
- (id)encodingFormatAsString:(int)a0;

@end
