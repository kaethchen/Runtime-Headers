@class NSString;

@interface WBSLazyString : NSObject {
    id /* block */ _provider;
    NSString *_string;
}

@property (readonly, nonatomic) NSString *string;

- (void).cxx_destruct;
- (id)initWithProvider:(id /* block */)a0;

@end
