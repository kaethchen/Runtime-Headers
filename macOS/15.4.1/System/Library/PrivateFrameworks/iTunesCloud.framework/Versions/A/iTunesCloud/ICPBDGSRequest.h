@class ICPBDGSFinishDelegationRequest, ICPBDGSStartDelegationRequest;

@interface ICPBDGSRequest : PBRequest <NSCopying> {
    ICPBDGSFinishDelegationRequest *_finishDelegationRequest;
    ICPBDGSStartDelegationRequest *_startDelegationRequest;
    unsigned int _uniqueID;
    struct { unsigned char uniqueID : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
