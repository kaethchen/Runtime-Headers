@class NSString, NSDictionary;

@interface ICMediaAPIURLMapping : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, copy, nonatomic) NSString *pattern;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)a0;

@end
