@class NSURL, CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItemTolerateBarePayload : CoreDAVItemWithHrefChildItem {
    CoreDAVHrefItem *_virtualHref;
    NSURL *_baseURL;
}

- (id)description;
- (void).cxx_destruct;
- (void)setPayload:(id)a0;
- (id)href;
- (void)parserSuggestsBaseURL:(id)a0;

@end
