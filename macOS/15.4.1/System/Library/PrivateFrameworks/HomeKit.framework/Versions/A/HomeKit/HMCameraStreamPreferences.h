@class HMCameraStreamVideoPreferences, HMCameraStreamAudioPreferences;

@interface HMCameraStreamPreferences : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) HMCameraStreamAudioPreferences *audioPreferences;
@property (retain) HMCameraStreamVideoPreferences *videoPreferences;
@property long long minimumRequiredAvailableOrInUseStreams;
@property BOOL shouldTakeOwnershipOfExistingStream;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAudioPreferences:(id)a0 videoPreferences:(id)a1;

@end
