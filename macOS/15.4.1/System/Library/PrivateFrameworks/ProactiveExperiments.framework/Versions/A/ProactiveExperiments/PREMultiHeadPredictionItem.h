@class NSNumber, NSString;

@interface PREMultiHeadPredictionItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *score;
@property (readonly, nonatomic) NSString *label;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithScore:(id)a0 label:(id)a1;

@end
