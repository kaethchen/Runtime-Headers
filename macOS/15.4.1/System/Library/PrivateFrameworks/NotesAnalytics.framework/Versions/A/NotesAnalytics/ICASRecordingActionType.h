@interface ICASRecordingActionType : NSObject <AADataType>

@property (readonly, nonatomic) long long recordingActionType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithRecordingActionType:(long long)a0;

@end
