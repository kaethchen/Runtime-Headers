@class NSString;

@interface AWDIDSRegistrationCompleted : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char circleStatus : 1; unsigned char registrationError : 1; unsigned char registrationType : 1; unsigned char wasSuccessful : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasRegistrationType;
@property (nonatomic) int registrationType;
@property (readonly, nonatomic) BOOL hasServiceIdentifier;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) BOOL hasWasSuccessful;
@property (nonatomic) unsigned int wasSuccessful;
@property (nonatomic) BOOL hasRegistrationError;
@property (nonatomic) int registrationError;
@property (nonatomic) BOOL hasCircleStatus;
@property (nonatomic) int circleStatus;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
