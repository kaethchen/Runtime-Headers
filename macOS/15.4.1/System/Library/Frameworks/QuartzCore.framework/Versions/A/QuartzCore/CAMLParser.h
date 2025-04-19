@class NSURL, NSError;
@protocol CAMLParserDelegate;

@interface CAMLParser : NSObject {
    struct _CAMLParserData { } *_data;
}

@property (retain) NSURL *baseURL;
@property (weak) id<CAMLParserDelegate> delegate;
@property (readonly) NSError *error;
@property (readonly) id result;

+ (id)parseContentsOfURL:(id)a0;
+ (id)parser;

- (void)dealloc;
- (id)init;
- (BOOL)parseData:(id)a0;
- (id)attributeForKey:(id)a0 remove:(BOOL)a1;
- (id)didFailToLoadResourceFromURL:(id)a0;
- (void)didLoadResource:(id)a0 fromURL:(id)a1;
- (id)elementValue;
- (id)objectById:(id)a0;
- (BOOL)parseBytes:(const char *)a0 length:(unsigned long long)a1;
- (BOOL)parseContentsOfURL:(id)a0;
- (BOOL)parseString:(id)a0;
- (void)parserError:(id)a0;
- (void)parserWarning:(id)a0;
- (void)setElementValue:(id)a0;
- (id)willLoadResourceFromURL:(id)a0;

@end
