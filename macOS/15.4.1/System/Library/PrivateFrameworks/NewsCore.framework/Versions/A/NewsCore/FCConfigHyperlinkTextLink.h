@class NSString;

@interface FCConfigHyperlinkTextLink : NSObject

@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, nonatomic) long long rangeStart;
@property (readonly, nonatomic) long long rangeLength;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;
- (id)initWithURL:(id)a0 rangeStart:(long long)a1 rangeLength:(long long)a2;

@end
