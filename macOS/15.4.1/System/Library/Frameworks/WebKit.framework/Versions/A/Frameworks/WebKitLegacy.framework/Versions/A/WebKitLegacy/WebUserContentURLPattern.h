@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {
    WebUserContentURLPatternPrivate *_private;
}

- (void)dealloc;
- (BOOL)isValid;
- (id)host;
- (id)scheme;
- (BOOL)matchesURL:(id)a0;
- (id)initWithPatternString:(id)a0;
- (BOOL)matchesSubdomains;

@end
