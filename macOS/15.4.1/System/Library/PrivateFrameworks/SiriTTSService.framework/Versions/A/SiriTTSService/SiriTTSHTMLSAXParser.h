@protocol SiriTTSHTMLSAXParserDelegate;

@interface SiriTTSHTMLSAXParser : NSObject

@property (weak, nonatomic) id<SiriTTSHTMLSAXParserDelegate> delegate;

+ (void)initialize;

- (void).cxx_destruct;
- (void)parse:(id)a0;

@end
