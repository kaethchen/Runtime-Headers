@class NSURL, NSString;

@interface GTCallstackFrame : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *file;
@property (nonatomic) unsigned int line;
@property (nonatomic) unsigned int column;
@property (copy, nonatomic) NSString *functionName;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
