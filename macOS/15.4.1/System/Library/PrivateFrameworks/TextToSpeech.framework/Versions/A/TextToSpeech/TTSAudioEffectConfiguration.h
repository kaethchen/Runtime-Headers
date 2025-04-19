@class NSUUID, NSString, NSDictionary;

@interface TTSAudioEffectConfiguration : NSObject

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSString *effectName;
@property (retain, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) NSDictionary *properties;
@property (nonatomic) BOOL enabled;

- (void).cxx_destruct;

@end
