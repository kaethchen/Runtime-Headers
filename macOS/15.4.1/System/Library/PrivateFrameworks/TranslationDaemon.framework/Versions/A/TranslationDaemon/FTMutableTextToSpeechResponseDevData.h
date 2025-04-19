@class NSString, FTQSSVersionInfo;

@interface FTMutableTextToSpeechResponseDevData : FTTextToSpeechResponseDevData

@property (copy, nonatomic) NSString *log;
@property (copy, nonatomic) FTQSSVersionInfo *server_info;
@property (nonatomic) BOOL has_click;
@property (copy, nonatomic) NSString *worker_process_type;
@property (nonatomic) int engine_error_code;
@property (copy, nonatomic) NSString *engine_error_message;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
