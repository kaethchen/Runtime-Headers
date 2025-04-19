@interface ICASTranscriptInteractionTarget : NSObject <AADataType>

@property (readonly, nonatomic) long long transcriptInteractionTarget;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithTranscriptInteractionTarget:(long long)a0;

@end
