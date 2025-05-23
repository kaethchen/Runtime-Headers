@class NSString, NSArray;

@interface FTMutableStartSpeechRequest : FTStartSpeechRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *task_name;
@property (nonatomic) long long codec;
@property (nonatomic) BOOL stream_results;
@property (nonatomic) BOOL enable_server_side_endpoint;
@property (copy, nonatomic) NSString *device_type;
@property (copy, nonatomic) NSString *device_os;
@property (copy, nonatomic) NSString *mic_type;
@property (copy, nonatomic) NSString *udm_host;
@property (nonatomic) int udm_port;
@property (nonatomic) BOOL tandem_mode;
@property (nonatomic) BOOL store_audio;
@property (nonatomic) BOOL stream_unstable_results;
@property (copy, nonatomic) NSString *request_locale;
@property (nonatomic) long long end_point_mode;
@property (nonatomic) int start_audio_bookmark;
@property (nonatomic) BOOL is_far_field;
@property (nonatomic) BOOL enable_utterance_detection;
@property (nonatomic) BOOL enable_endpoint_candidate;
@property (nonatomic) unsigned long long start_recognition_at;
@property (nonatomic) unsigned long long start_endpointing_at;
@property (nonatomic) BOOL enable_hybrid_endpoint;
@property (copy, nonatomic) NSString *client_endpointer_model_version;
@property (copy, nonatomic) NSString *keyboard_identifier;
@property (copy, nonatomic) NSString *input_origin;
@property (nonatomic) unsigned int initial_recognition_candidate_id;
@property (nonatomic) BOOL disable_auto_punctuation;
@property (nonatomic) BOOL keyboard_dictation;
@property (copy, nonatomic) NSString *experiment_id;
@property (nonatomic) long long speech_request_source;
@property (copy, nonatomic) NSString *fork_id;
@property (copy, nonatomic) NSString *application_name;
@property (copy, nonatomic) NSString *metadata;
@property (copy, nonatomic) NSArray *multi_user_parameters;
@property (nonatomic) unsigned int initial_result_candidate_id;
@property (copy, nonatomic) NSString *self_session_id;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
