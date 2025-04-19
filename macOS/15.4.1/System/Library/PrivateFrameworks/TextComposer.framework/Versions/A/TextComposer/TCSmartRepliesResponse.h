@class NSArray, NSDictionary;

@interface TCSmartRepliesResponse : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *responseTexts;
@property (readonly, copy, nonatomic) NSArray *responses;
@property (readonly, nonatomic) int inferenceStatus;
@property (readonly, copy) NSDictionary *options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResponses:(id)a0;
- (id)initWithResponseTexts:(id)a0;
- (id)initWithResponses:(id)a0 inferenceStatus:(int)a1;
- (id)initWithResponses:(id)a0 inferenceStatus:(int)a1 options:(id)a2;

@end
