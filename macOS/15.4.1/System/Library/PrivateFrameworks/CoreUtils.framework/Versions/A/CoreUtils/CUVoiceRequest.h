@interface CUVoiceRequest : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) id owner;

- (void).cxx_destruct;

@end
