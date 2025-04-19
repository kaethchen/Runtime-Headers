@class NSURL, NSData;

@interface Sage.DocumentXPCEnvelope : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _url;
    void /* unknown type, empty encoding */ _metadata;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSURL *_url;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _fileHandle;
@property (nonatomic, copy) NSData *_metadata;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
