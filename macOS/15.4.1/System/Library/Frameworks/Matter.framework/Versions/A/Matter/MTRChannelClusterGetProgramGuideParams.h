@class NSArray, MTRChannelClusterPageTokenStruct, NSData, NSNumber;

@interface MTRChannelClusterGetProgramGuideParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSArray *channelList;
@property (copy, nonatomic) MTRChannelClusterPageTokenStruct *pageToken;
@property (copy, nonatomic) NSNumber *recordingFlag;
@property (copy, nonatomic) NSArray *externalIDList;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_encodeAsDataValue:(id *)a0;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })_encodeToTLVReader:(struct PacketBufferTLVReader { unsigned int x0; void *x1; struct Tag { unsigned long long x0; } x2; unsigned long long x3; struct TLVBackingStore *x4; char *x5; char *x6; unsigned int x7; unsigned int x8; int x9; unsigned short x10; BOOL x11; struct PacketBufferHandle { struct PacketBuffer *x0; } x12; } *)a0;

@end
