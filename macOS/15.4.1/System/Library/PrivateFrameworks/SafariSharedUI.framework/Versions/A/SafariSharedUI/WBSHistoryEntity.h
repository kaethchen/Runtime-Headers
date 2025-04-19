@class NSString, NSURL;

@interface WBSHistoryEntity : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSURL *url;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 url:(id)a2;

@end
