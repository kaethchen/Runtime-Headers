@class NSArray, NSData;

@interface MADVIVisualSearchGatingResult : MADResult

@property (readonly, nonatomic) NSArray *resultItems;
@property (readonly, nonatomic) NSData *payload;
@property (readonly, nonatomic) BOOL passedGating;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResultItems:(id)a0 andPayload:(id)a1;

@end
