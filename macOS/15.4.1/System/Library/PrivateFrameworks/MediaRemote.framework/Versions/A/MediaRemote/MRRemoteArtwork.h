@class NSString, NSData;

@interface MRRemoteArtwork : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *artworkURLString;
@property (readonly, nonatomic) NSData *artworkURLTemplateData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithArtworkURLString:(id)a0 templateData:(id)a1;
- (id)initWithProtobuf:(id)a0;
- (id)initWithProtobufData:(id)a0;
- (id)protobufData;

@end
