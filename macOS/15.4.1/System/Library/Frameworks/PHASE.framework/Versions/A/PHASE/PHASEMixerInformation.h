@class NSString;

@interface PHASEMixerInformation : NSObject

@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long mixerType;

- (void).cxx_destruct;
- (void)setUid:(id)a0;
- (id)uid;

@end
