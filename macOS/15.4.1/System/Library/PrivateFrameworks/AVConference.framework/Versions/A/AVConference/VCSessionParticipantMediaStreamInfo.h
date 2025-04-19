@class VCMediaStream, NSMutableArray;

@interface VCSessionParticipantMediaStreamInfo : NSObject

@property (retain, nonatomic) VCMediaStream *stream;
@property (readonly, nonatomic) NSMutableArray *streamConfigs;
@property (readonly, nonatomic) BOOL isOneToOneSupported;

- (void)dealloc;
- (id)init;
- (void)addStreamConfig:(id)a0;

@end
