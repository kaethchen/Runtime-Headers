@class NUModel;

@interface NUChannelControlFormat : NUChannelFormat

@property (readonly, nonatomic) NUModel *dataModel;
@property (readonly, nonatomic) long long controlType;

+ (id)controlFormatWithSchema:(id)a0;
+ (id)controlFormatWithSetting:(id)a0;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (long long)channelType;
- (id)initWithControlType:(long long)a0 dataModel:(id)a1;
- (BOOL)isCompatibleWithChannelFormat:(id)a0;
- (BOOL)isEqualToChannelFormat:(id)a0;
- (id)subchannelFormatForKey:(id)a0;
- (BOOL)validateChannelData:(id)a0 error:(out id *)a1;

@end
