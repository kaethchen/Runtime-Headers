@class NSURL, NSString;

@interface LPVideoMetadata : NSObject <LPMediaMetadata, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int version;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (copy, nonatomic) NSString *accessibilityText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithDictionary:(id)a0;

@end
