@interface ICNFMCRemoteMessage : ICNFMCMessage

@property (nonatomic) struct { unsigned int reserved : 27; unsigned char isPartial : 1; unsigned char partsHaveBeenCached : 1; unsigned char hasTemporaryUid : 1; unsigned char isHTML : 1; unsigned char isRich : 1; } remoteFlags;
@property (nonatomic) BOOL isPartial;
@property (nonatomic) BOOL partsHaveBeenCached;
@property (nonatomic) BOOL hasTemporaryUid;
@property (nonatomic) unsigned long long messageSize;

- (id)initWithSize:(unsigned long long)a0;

@end
