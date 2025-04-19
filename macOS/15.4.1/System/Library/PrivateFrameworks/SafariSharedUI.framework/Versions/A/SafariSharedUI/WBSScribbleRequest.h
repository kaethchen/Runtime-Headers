@class NSString, NSDictionary;

@interface WBSScribbleRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGPoint { double x; double y; } location;
@property (readonly, nonatomic) unsigned long long requestID;
@property (readonly, copy, nonatomic) NSString *functionBody;
@property (readonly, nonatomic) NSDictionary *arguments;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0;

@end
