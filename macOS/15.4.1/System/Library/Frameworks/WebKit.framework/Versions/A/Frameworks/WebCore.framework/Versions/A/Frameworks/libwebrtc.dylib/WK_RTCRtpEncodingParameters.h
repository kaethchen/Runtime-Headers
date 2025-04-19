@class NSString, NSNumber;

@interface WK_RTCRtpEncodingParameters : NSObject

@property (readonly, nonatomic) struct RtpEncodingParameters { struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x0; double x1; int x2; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x3; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x4; struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } x5; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x6; struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } x7; struct optional<std::string> { union { char x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x1; } x0; BOOL x1; } x8; struct optional<webrtc::Resolution> { union { char x0; struct Resolution { int x0; int x1; } x1; } x0; BOOL x1; } x9; BOOL x10; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x11; BOOL x12; BOOL x13; struct optional<webrtc::RtpCodec> { union { char x0; struct RtpCodec { void /* function */ **x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x1; int x2; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x3; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x4; struct vector<webrtc::RtcpFeedback, std::allocator<webrtc::RtcpFeedback>> { struct RtcpFeedback *x0; struct RtcpFeedback *x1; struct __compressed_pair<webrtc::RtcpFeedback *, std::allocator<webrtc::RtcpFeedback>> { struct RtcpFeedback *x0; } x2; } x5; struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> { unsigned long long x0; } x2; } x0; } x6; } x1; } x0; BOOL x1; } x14; } nativeParameters;
@property (copy, nonatomic) NSString *rid;
@property (nonatomic) BOOL isActive;
@property (copy, nonatomic) NSNumber *maxBitrateBps;
@property (copy, nonatomic) NSNumber *minBitrateBps;
@property (copy, nonatomic) NSNumber *maxFramerate;
@property (copy, nonatomic) NSNumber *numTemporalLayers;
@property (copy, nonatomic) NSNumber *scaleResolutionDownBy;
@property (readonly, nonatomic) NSNumber *ssrc;
@property (nonatomic) long long networkPriority;

+ (int)nativePriorityFromPriority:(long long)a0;
+ (long long)priorityFromNativePriority:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNativeParameters:(const void *)a0;

@end
