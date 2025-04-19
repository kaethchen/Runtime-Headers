@class NSString, NSNumber;

@interface CSContext : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSNumber *state;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 andState:(id)a1;

@end
