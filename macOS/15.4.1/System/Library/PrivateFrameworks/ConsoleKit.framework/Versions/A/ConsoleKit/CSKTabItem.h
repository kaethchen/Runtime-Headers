@class NSString;

@interface CSKTabItem : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1;

@end
