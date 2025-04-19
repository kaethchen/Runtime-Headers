@class NSString, NSDictionary;

@interface SUIBIntelligenceFlowActionSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *formatString;
@property (readonly, copy, nonatomic) NSDictionary *parameterSummaries;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)parameterMatches;

@end
