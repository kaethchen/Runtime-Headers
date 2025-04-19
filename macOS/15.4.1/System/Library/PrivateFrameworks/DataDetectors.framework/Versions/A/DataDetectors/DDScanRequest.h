@class NSString, NSDictionary, NSArray;

@interface DDScanRequest : NSObject

@property (readonly) NSString *identifier;
@property (readonly) NSDictionary *context;
@property (copy) NSArray *results;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 context:(id)a1;

@end
