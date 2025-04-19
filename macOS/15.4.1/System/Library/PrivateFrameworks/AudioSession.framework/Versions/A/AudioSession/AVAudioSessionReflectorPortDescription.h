@class NSArray, NSString, AVAudioSessionPortDescription;

@interface AVAudioSessionReflectorPortDescription : NSObject

@property (readonly) NSArray *audioStreamTags;
@property (readonly) NSString *audioStreamTagsPolicyType;
@property (readonly, weak) AVAudioSessionPortDescription *referencePortDescription;
@property (readonly) NSArray *sessionTokens;
@property (readonly) NSString *behavior;
@property (readonly) unsigned long long dspLocation;

- (id)initWithApplicationBundleIDs:(id)a0;
- (id)initWithAudioStreamTagsPolicy:(id)a0 withAudioStreamTags:(id)a1 withDSPLocation:(unsigned long long)a2 withBehavior:(id)a3;
- (id)initWithPortReference:(id)a0 withDSPLocation:(unsigned long long)a1 withBehavior:(id)a2;

@end
