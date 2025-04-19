@class NSString, _MPCProtoDelegateInfoTokenA, _MPCProtoDelegateInfoTokenE, _MPCProtoDelegateInfoTokenB;

@interface _MPCProtoDelegateInfo : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _accountCapabilities;
    unsigned long long _accountID;
    long long _delegateInfoID;
    NSString *_deviceGUID;
    NSString *_deviceName;
    NSString *_requestUserAgent;
    int _systemReleaseType;
    NSString *_timeZoneName;
    _MPCProtoDelegateInfoTokenA *_tokenA;
    _MPCProtoDelegateInfoTokenB *_tokenB;
    _MPCProtoDelegateInfoTokenE *_tokenE;
    NSString *_uuid;
    BOOL _privateListeningEnabled;
    struct { unsigned char accountID : 1; unsigned char delegateInfoID : 1; unsigned char systemReleaseType : 1; unsigned char privateListeningEnabled : 1; } _has;
}

@property (class, readonly, nonatomic) _MPCProtoDelegateInfo *currentDeviceDelegateInfo;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
