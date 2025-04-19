@interface ICASTranscriptActionType : NSObject <AADataType>

@property (readonly, nonatomic) long long transcriptActionType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithTranscriptActionType:(long long)a0;

@end
