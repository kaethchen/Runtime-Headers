@class NSURL, NSData, NSString;

@interface PODArtwork : NSObject <PODArtworkProtocol, PODSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *imageUrl;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initUsingPropertiesFrom:(id)a0;
- (id)initWithImageUrl:(id)a0;

@end
