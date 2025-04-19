@class NSString;

@interface SCRTrackedItemInfo : NSObject

@property (retain, nonatomic) id element;
@property (copy, nonatomic) NSString *identifier;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
