@class NSString, NSArray;

@interface AutoFillDisplayData : NSObject

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSArray *values;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *property;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 values:(id)a1;
- (id)initWithLabel:(id)a0 values:(id)a1 identifier:(id)a2 property:(id)a3;

@end
