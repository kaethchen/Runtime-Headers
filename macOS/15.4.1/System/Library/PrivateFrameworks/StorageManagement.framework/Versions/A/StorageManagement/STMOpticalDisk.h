@class NSString, NSURL;

@interface STMOpticalDisk : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *formatsString;
@property (copy, nonatomic) NSString *modelNumber;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
