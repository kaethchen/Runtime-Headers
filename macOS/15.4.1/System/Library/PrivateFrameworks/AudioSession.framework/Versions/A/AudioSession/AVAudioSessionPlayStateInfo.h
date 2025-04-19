@class NSString;

@interface AVAudioSessionPlayStateInfo : NSObject

@property (nonatomic) unsigned int playState;
@property (nonatomic) unsigned int IOModes;
@property (nonatomic) void /* function */ *IOProcID;
@property (retain, nonatomic) NSString *deviceUID;

- (void).cxx_destruct;

@end
