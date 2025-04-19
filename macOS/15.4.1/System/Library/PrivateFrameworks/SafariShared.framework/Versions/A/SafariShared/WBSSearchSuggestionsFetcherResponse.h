@class NSArray, NSDictionary, NSNumber;

@interface WBSSearchSuggestionsFetcherResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) long long sizeInBytes;
@property (readonly, nonatomic) long long statusCode;
@property (readonly, copy, nonatomic) NSDictionary *timingData;
@property (readonly, copy, nonatomic) NSDictionary *postFixSuggestions;
@property (readonly, nonatomic) NSNumber *prefixNavigationalIntent;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSuggestions:(id)a0 postFixSuggestions:(id)a1 prefixNavigationalIntent:(id)a2 sizeInBytes:(long long)a3 statusCode:(long long)a4 timingData:(id)a5;

@end
