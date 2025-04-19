@class NSData, SWPersonIdentity;

@interface SWPerson : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id slPerson;
@property (readonly, nonatomic) NSData *customThumbnailImageData;
@property (retain, nonatomic) SWPersonIdentity *identity;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)displayName;
- (id)handle;
- (id)contact;
- (id)thumbnailImageData;
- (id)initWithHandle:(id)a0 identity:(id)a1 displayName:(id)a2 thumbnailImageData:(id)a3;
- (id)initWithHandle:(id)a0 displayName:(id)a1 thumbnailImageData:(id)a2;

@end
