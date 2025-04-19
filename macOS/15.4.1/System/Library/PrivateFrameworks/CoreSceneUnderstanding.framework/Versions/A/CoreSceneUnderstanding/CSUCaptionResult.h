@class NSString;

@interface CSUCaptionResult : NSObject

@property (readonly, nonatomic) float score;
@property (readonly, copy, nonatomic) NSString *caption;

- (void).cxx_destruct;
- (id)initWithCaption:(id)a0 score:(float)a1;

@end
