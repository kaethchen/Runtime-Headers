@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) int writeStyle;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)write:(id)a0;
- (id)payloadAsFullURL;
- (id)payloadAsOriginalURL;
- (id)initWithURL:(id)a0 baseURL:(id)a1;
- (void)parserSuggestsBaseURL:(id)a0;

@end
