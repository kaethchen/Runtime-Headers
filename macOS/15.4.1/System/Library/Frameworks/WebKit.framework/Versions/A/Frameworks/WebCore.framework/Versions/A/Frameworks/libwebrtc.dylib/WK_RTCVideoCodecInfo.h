@class NSString, NSDictionary;

@interface WK_RTCVideoCodecInfo : NSObject <NSCoding>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *parameters;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 parameters:(id)a1;
- (id)initWithNativeSdpVideoFormat:(struct SdpVideoFormat { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x0; struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> { unsigned long long x0; } x2; } x0; } x1; struct InlinedVector<webrtc::ScalabilityMode, 34UL, std::allocator<webrtc::ScalabilityMode>> { struct Storage<webrtc::ScalabilityMode, 34UL, std::allocator<webrtc::ScalabilityMode>> { struct CompressedTuple<std::allocator<webrtc::ScalabilityMode>, unsigned long> { unsigned long long x0; } x0; union Data { struct Allocated { unsigned char *x0; unsigned long long x1; } x0; struct Inlined { char x0[34]; } x1; } x1; } x0; } x2; })a0;
- (BOOL)isEqualToCodecInfo:(id)a0;
- (struct SdpVideoFormat { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x0; struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> { unsigned long long x0; } x2; } x0; } x1; struct InlinedVector<webrtc::ScalabilityMode, 34UL, std::allocator<webrtc::ScalabilityMode>> { struct Storage<webrtc::ScalabilityMode, 34UL, std::allocator<webrtc::ScalabilityMode>> { struct CompressedTuple<std::allocator<webrtc::ScalabilityMode>, unsigned long> { unsigned long long x0; } x0; union Data { struct Allocated { unsigned char *x0; unsigned long long x1; } x0; struct Inlined { char x0[34]; } x1; } x1; } x0; } x2; })nativeSdpVideoFormat;

@end
