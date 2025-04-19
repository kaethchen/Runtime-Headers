@class NSString, NSURL;

@interface TabSearchTabInfoForFiltering : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *url;

+ (id)infoWithTitle:(id)a0 url:(id)a1;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 url:(id)a1;

@end
