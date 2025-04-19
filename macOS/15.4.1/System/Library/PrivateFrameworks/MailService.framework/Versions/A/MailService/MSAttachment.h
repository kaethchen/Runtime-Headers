@class NSString, NSData;

@interface MSAttachment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contentIDWithoutScheme;
@property (copy) NSData *data;
@property (copy) NSString *filename;
@property BOOL isReferenced;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 filename:(id)a1;
- (id)initWithMCAttachment:(id)a0;

@end
