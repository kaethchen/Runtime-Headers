@class NSString;

@interface SUIBIntelligenceFlowProgressUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float progress;
@property (readonly, copy, nonatomic) NSString *progressDescription;
@property (readonly, copy, nonatomic) NSString *additionalProgressDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBuilder:(id /* block */)a0;

@end
