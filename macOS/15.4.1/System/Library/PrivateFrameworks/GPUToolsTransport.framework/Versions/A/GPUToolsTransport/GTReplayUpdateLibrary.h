@class NSURL, NSData, NSString;

@interface GTReplayUpdateLibrary : GTReplayRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) union { struct { int dispatchIndex; int dispatchICBIndex; } ; unsigned long long uid; } dispatchUID;
@property (nonatomic) unsigned long long streamRef;
@property (retain, nonatomic) NSURL *shaderURL;
@property (retain, nonatomic) NSData *shaderIR;
@property (retain, nonatomic) NSString *shaderSource;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
