@class NSData, NSString;

@interface VNCVMLFaceprint_LegacySupportDoNotChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *faceprint;
@property (copy) NSString *key;
@property unsigned int platform;
@property unsigned int profile;
@property (copy) NSString *faceprintInputPath;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
